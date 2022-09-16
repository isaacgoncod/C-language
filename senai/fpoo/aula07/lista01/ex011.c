#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
	
	char nomes[5][15];
	float altura[5], peso[5], imc[5];
	int i;
	
	printf("Digite os nomes respectivamente:\n");
	for(i = 0; i < 5; i++){
		scanf("%s", &nomes[i]);
	}
	printf("\n");
	printf("Digite a peso e altura respectivamente de cada pessoa:\n");
	for(i = 0; i < 5; i++){
		scanf("%f%f", &peso[i], &altura[i]);
	}
	printf("\n");
	printf("Nomes\tAltura\tPeso\tIMC\n\n");
	for(i = 0; i < 5; i++){
		imc[i] = peso[i] / (altura[i] * altura[i]);
		printf("%s\t%.1f\t%.2f\t%.3f\n", nomes[i], altura[i], peso[i], imc[i]);
	}
	printf("\n");
	
}
