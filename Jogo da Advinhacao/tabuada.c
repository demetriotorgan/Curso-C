#include <stdio.h>

int main(){
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Calculando a tabuada de: %d", numero);    
        for(int i = 1; i <= 10; i++){
            int produto;
            produto = numero * i;
            printf("%d * %d = %d\n",numero,i,produto);
        }
    return 0;
}