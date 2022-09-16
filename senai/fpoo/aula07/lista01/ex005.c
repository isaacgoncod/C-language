#include <stdio.h>
#include <locale.h>
#include <string.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    char mercadoria[10][30];
    float preco[10], perc[10], npreco[10];
    int i;

    printf("Digíte o nome de 10 mercadorias:\n ");
    for(i = 1; i <=10; i++){
        scanf("%s", &mercadoria[i]);
    }
    printf("Digíte o preço das 10 mercadorias respectivamente:\n");
    for(i = 1; i <=10; i++){
        scanf("%f", &preco[i]);
    }
    printf("Digíte o índice percentual(%) de cada mercadoria respectivamente:\n ");
    for(i = 1; i <=10; i++){
        scanf("%f", &perc[i]);
    }
    for(i = 1; i <=10; i++){
        npreco[i] = preco[i] - preco[i] * perc[i] / 100;
        printf("Mercadoria: %s\nPreço Original: R$ %.2f\nDesconto(%): %.2f\nPreço Final: %.2f\n", mercadoria[i], preco[i], perc[i], npreco[i]);
        printf("------------------------------------------------------\n");

    }
}
