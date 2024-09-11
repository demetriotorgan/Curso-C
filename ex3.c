#include <stdio.h>

int main(){

int soma = 0;
printf("Iniciando a soma...\n");
    for(int i = 0; i <=100;i++){
        printf("%d\n",soma);
        soma = soma + i;
        
    }
    return 0;
}