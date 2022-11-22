#include<stdio.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[5][15];
    int idade[5];
    int i = 0;

    printf("Digíte o nome e idade de 5 pessoas respectivamente: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%s%d", &nome[i], &idade[i]);

    }

    for(i = 0; i < 5; i++)
    {
        if(idade[i] < 10)
        {
            printf("%s\t%d\tCriança\n", nome[i], idade[i]);

        }
        else if(idade[i] >= 10 && idade[i] < 20)
        {
            printf("%s\t%d\tJovem\n", nome[i], idade[i]);

        }
        else if(idade[i] >= 20 && idade[i] < 60)
        {
            printf("%s\t%d\tAdulto\n", nome[i], idade[i]);
        }
        else
        {
            printf("%s\t%d\tIdoso\n", nome[i], idade[i]);
        }
    }
}
