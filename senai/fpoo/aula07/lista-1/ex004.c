#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    char cidade[5][15];
    float eleitores[5], votos[5];
    int i;

    printf("Dig�te o nome de 5 cidades :\n ");
    for(i = 0; i < 5; i++)
    {
        gets(cidade[i]);
    }
    
	printf("Dig�te o total de eleitores das 5 cidades :\n ");
    for(i = 0; i < 5; i++)
    {
        scanf("%f", &eleitores[i]);
    }
    
    printf("Dig�te o total de votos apurados das 5 cidades :\n ");
    for(i = 0; i < 5; i++)
    {
        scanf("%f", &votos[i]);
    }
    
    for(i = 0; i < 5; i++)
    {
        votos[i] = votos[i] / eleitores[i] * 100;
        printf("A cidade %s, teve %.1f%% de participa��o dos eleitores nos votos.\n", cidade[i], votos[i]);
    }

}
