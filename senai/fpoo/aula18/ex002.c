#include<stdio.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int i = 0;
    char nome [5][15];
    int idade [5];
    float peso [5];

    printf("Digíte o nome, idade e peso de 5 pessoas respectivamente: ");
    for(i = 0 ; i < 5; i++)
    {
        scanf("%s%d%f", &nome[i], &idade[i], &peso[i]);
    }
    for(i = 0 ; i < 5; i++)
    {
        if(idade[i] >= 18 && idade[i] <= 69 && peso[i] > 50)
        {
            printf("%s\t%d\t%.2f\tPODE doar sangue\n", nome[i], idade[i], peso[i]);
        }
        else
        {
            printf("%s\t%d\t%.2f\tNÃO PODE doar sangue\n", nome[i], idade[i], peso[i]);
        }
    }
}

