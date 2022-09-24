#include <stdio.h>
#include <stdlib.h>

//Entrar com 10 números e imprimir a metade de cada número.

void main(){

    int i;
    float numero;

    for( i = 1; i <= 10; i++){
        printf("Digite um numero: ");
        scanf("%f", &numero);

        printf("Metade : %.2f\n", numero / 2);
    }
    printf("\n");

}

