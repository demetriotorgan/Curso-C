#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("----------------------------------\n");
    printf("Bem vindo ao jogo da advinhacao");
    printf("\n---------------------------------\n");

    int segundos = time(0); //retorna a quantidade de segundos desde 1970;
    srand(segundos); //Muda a semente da função rand

    int numero = rand();

    int numeroSecreto = numero % 100;
    int chute;    
    int ganhou = 0;
    int tentativa = 1;

    double pontos = 1000;


while(ganhou == 0){   
        printf("---Tentaiva %d---\n ", tentativa);        
        printf("Qual e o seu chute:? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0){
            printf("Nao chute numeros negativos\n");            
            continue;
        }
        
        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;        
        
        if(acertou){
            printf("Parabens vc acertou\n");
            //Parando o while após o acerto
            ganhou = 1;
        }            
        else if(maior){
                printf("Seu chute foi maior que o numero secreto \n");
            }
        else{
                printf("Seu chute foi menor que o numero secreto\n");
            } 
    tentativa++;       

    //Fazendo o casting (vertendo de um tipo para o outro)
    //Para o abs precisamos da lib <stdlib.h>
    double pontosPerdidos = abs((double)(chute - numeroSecreto)) / (double)2;
    pontos = pontos - pontosPerdidos;
}    
    printf("---FIM DO JOGO EM %d tentativas---", tentativa -1);
    printf("Total de pontos: %.2f\n",pontos);
    return 0;
}