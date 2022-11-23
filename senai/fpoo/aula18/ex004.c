#include<stdio.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[15];
    float salario;
    float fgts;

    printf("Digite seu nome e salario respectivamente:\n");
    scanf("%s%f", &nome, &salario);

    fgts = salario * 8 / 100;

    printf("%s seu total descontado do FGTS: %.2f",nome, fgts);

}

