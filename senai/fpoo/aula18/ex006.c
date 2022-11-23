#include<stdio.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[15];
    float salario;
    float irrf;

    printf("Digite seu nome e salario respectivamente:\n");
    scanf("%s%f", &nome, &salario);

    if (salario <= 1903.00)
    {
        irrf =  0;
        printf("%s o total da declaracao do seu imposto de renda (irrf) e de: %.2f", nome, irrf);
    }
    else if (salario > 1903.00 && salario <= 2826.00)
    {
        irrf =  salario * 7.5 / 100 - 142.80;
        printf("%s o total da declaracao do seu imposto de renda (irrf) e de: %.2f", nome, irrf);
    }
    else if (salario > 2826.00 && salario <= 3751.00)
    {
        irrf = salario * 15 / 100 - 354.80;
        printf("%s o total da declaracao do seu imposto de renda (irrf) e de: %.2f", nome, irrf);
    }
    else if (salario > 3751.00 && salario <= 4664.00)
    {
        irrf = salario * 22.5 / 100 - 363.13;
        printf("%s o total da declaracao do seu imposto de renda (irrf) e de: %.2f", nome, irrf);

    }
    else
    {
        irrf = salario * 27.5 / 100 - 689.36;
        printf("%s o total da declaracao do seu imposto de renda (irrf) e de: %.2f", nome, irrf);

    }

}

