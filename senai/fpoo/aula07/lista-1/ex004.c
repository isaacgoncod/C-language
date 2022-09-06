#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	char cidade[5][15];
	float eleitores[5], votos[5];
	int i;
	
	for(i = 0; i < 5; i++){
	printf("Digíte a %do cidade : ", i + 1);
	gets(cidade[i]);
	}
	for(i = 0; i < 5; i++){
		printf("Digíte o total de eleitores da %do cidade : ", i + 1);
		scanf("%f", &eleitores[i]);
	}
	for(i = 0; i < 5; i++){
		printf("Digíte o total de votos apurados da %do cidade : ", i + 1);
		scanf("%f", &votos[i]);
	}
	for(i = 0; i < 5; i++){
		votos[i] = (float) votos[i] / eleitores[i] * 100;
		printf("A cidade %s, teve %.1f%% de participação dos eleitores nos votos\n", cidade[i], votos[i]); 
	}
	
}
