#include <stdio.h>
#include <locale.h>
#include <string.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, j, aux, vitoria[5], empate[5], somaVitoria[5], ptimes[5];
    char times[5][5], auxt[5];

    printf("Digíte os nomes dos times : \n");

    for(i = 0; i < 5; i++)
    {
        gets(times[5]);
    }

    printf("Digíte o número de vitórias respectivamente : \n");

    for(i = 0; i < 5; i++)
    {
        do
        {
            scanf("%d", &vitoria[i]);
        }
        while(vitoria[i] < 0 || vitoria[i] > 10000000);

        somaVitoria[i] = vitoria[i] * 3;
    }

    printf("Digíte o número de empates respectivamente: \n");

    for(i = 0; i < 5; i++)
    {
        do
        {
            scanf("%d", &empate[i]);
        }
        while(empate[i] < 0 || empate[i] > 10000000);
        ptimes[i] = somaVitoria[i] + empate[i];
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if(ptimes[i] > ptimes[j])
            {
                aux = ptimes[i];
                ptimes[i] = ptimes[j];
                ptimes[j] = aux;

                strcpy(auxt, times[i]);
                strcpy(times[i], times[j]);
                strcpy(times[j], auxt);
            }
        }
    }

    for(i = 0; i < 5; i++)
    {
        printf("%s, total de pontos : %d Pontos\n", times[i], ptimes[i] );
    }
}
