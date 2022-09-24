#include <stdio.h>
#include <stdlib.h>

//Criar um algoritmo que imprima todos os numeros de 1 ate 100 e a soma deles

void main(){

    int i, soma = 0;

    for( i = 1; i <= 100; i++){
        soma = soma + i;
        printf("%d", i);
        printf("\n");

    }
    printf("Somatorio de 1 a 100: %d ", soma);
}
