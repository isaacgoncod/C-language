#include<stdio.h>
#include<locale.h>
#include<string.h>

float fgts(float salario)
{
    return salario * 8 / 100;
}
float inss(float salario)
{
    if(salario <= 1212)
    {
        return  salario * 7.5 / 100;
    }
    else if(salario > 1212 && salario <= 2427)
    {
        return  salario * 9 / 100;
    }
    else if(salario > 2427 && salario <= 3614)
    {
        return  salario * 12 / 100;
    }
    else if(salario > 3614 && salario <= 7087)
    {
        return salario * 14 / 100;
    }
    else
    {
        return salario * 14 / 100;
    }
}
float irrf(float salario)
{
    if (salario <= 1903.00)
    {
        return  0;
    }
    else if (salario > 1903.00 && salario <= 2826.00)
    {
        return    salario * 7.5 / 100 - 142.80;
    }
    else if (salario > 2826.00 && salario <= 3751.00)
    {
        return  salario * 15 / 100 - 354.80;
    }
    else if (salario > 3751.00 && salario <= 4664.00)
    {
        return  salario * 22.5 / 100 - 363.13;
    }
    else
    {
        return  salario * 27.5 / 100 - 689.36;
    }
}

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int contSal = 0;
    int i = 0;
    int j = 0;
    char nome[5][15];
    char auxn[5][15];
    float salario[5];
    float aux = 0;
    float total = 0;
    float media = 0;

    printf("Digite os 5 nomes e salarios respectivamente:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%s%f", &nome[i], &salario[i]);

        total += salario[i];
        contSal++;
    }

    media = total / contSal;

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
    for(i = 0; i < 5; i++)
    {
        printf("Nome: %s\nSalario: R$%.2f\nFGTS: R$%.2f\nINSS: R$%.2f\nIRRF: R$%.2f\n", nome[i], salario[i], fgts(salario[i]), inss(salario[i]), irrf(salario[i]));
        printf("-----------------------------------\n");
    }
    printf("Total dos salarios: R$%.2f\n", total);
    printf("Media salarial: R$%.2f\n", media);
    printf("A pessoa que e mais bem paga e : %s, R$%.2f\n", nome[0], salario[0]);
    printf("A pessoa que e menos bem paga e : %s, R$%.2f", nome[4], salario[4]);


}

