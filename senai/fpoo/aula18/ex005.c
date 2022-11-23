#include<stdio.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[15];
    float salario;
    float inss;

    printf("Digite seu nome e salario respectivamente:\n");
    scanf("%s%f", &nome, &salario);

    if(salario <= 1212)
    {
        inss = salario * 7.5 / 100;
        printf("%s seu total a ser pago ao inss: %.2f ", nome, inss);
    }
    else if(salario > 1212 && salario <= 2427)
    {
        inss = salario * 9 / 100;
        printf("%s seu total descontado do FGTS: %.2f",nome, inss);
    }
    else if(salario > 2427 && salario <= 3614)
    {
        inss = salario * 12 / 100;
        printf("%s seu total descontado do FGTS: %.2f",nome, inss);
    }
    else if(salario > 3614 && salario <= 7087)
    {
        inss = salario * 14 / 100;
        printf("%s seu total descontado do FGTS: %.2f",nome, inss);
    }
    else
    {
        inss = salario * 14 / 100;
        printf("%s seu total descontado do FGTS: %.2f",nome, inss);
    }

}

