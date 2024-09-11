#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 5

int main(){
    printf("----------------------------------\n");
    printf("Bem vindo ao jogo da advinhacao");
    printf("\n---------------------------------\n");

    int numeroSecreto = 42;
    int chute;    

for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++){        
        printf("Chute de numero: %d\n",i);
        printf("Qual e o seu chute:? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0){
            printf("Nao chute numeros negativos\n");
            i--;
            continue;
        }
        
        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;
        int menor = chute < numeroSecreto;
        
        if(acertou){
            printf("Parabens vc acertou");
            //Parando o for após o acerto
            break;
        }            
        else if(maior){
                printf("Seu chute foi maior que o numero secreto \n");
            }
        else if(menor){
                printf("Seu chute foi menor que o numero secreto\n");
            }                
}    
    return 0;
}