#include<stdio.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int i = 0;
    char nome[5][15];
    float salario[5];
    float somaSal;
    float mediaSal;

    printf("Digite os 5 nomes e salarios respectivamente:\n");

    for(i = 0; i < 5; i++){
        scanf("%s%f", &nome[i], &salario[i]);
        somaSal += salario[i];
    }
     mediaSal = somaSal / i ;

     printf("Total: R$%.2f\nMedia: R$%.2f", somaSal, mediaSal);



}

