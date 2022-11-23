#include<stdio.h>
#include<locale.h>
#include<string.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int i = 0;
    int j = 0;
    char nome[5][15];
    char auxn[5][15];
    float salario[5];
    float aux = 0;

    printf("Digite os nomes e salarios respectivamente:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%s%f", &nome[i], &salario[i]);
    }
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(salario[i] > salario[j])
            {
                aux = salario[i];
                salario[i] = salario[j];
                salario[j] = aux;

                strcpy(auxn, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], auxn);

            }

        }
    }
    printf("A pessoa que e mais bem paga e : %s, R$%.2f\n", nome[0], salario[0]);
    printf("A pessoa que e menos bem paga e : %s, R$%.2f", nome[4], salario[4]);


}

