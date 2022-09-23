#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

void retangulo(int alt, int lar, int car ){

	int i, j ;
	
	for(i = 0; i < alt; i++){
		for(j = 0; j < lar; j++){
			printf("%s", car);
		}
		printf("\n");
	}
	return alt, lar, car;
}

void main(float argc, char*argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	char car;
	int alt, lar;
	
	printf("Digíte o caractere que irá desenhar o retangulo : ");
	scanf("%s", &car);
	
	printf("Digite a altura do retangulo: ");
	scanf("%d", &alt);
	
	printf("Digite a largura do retangulo: ");
	scanf("%d", &lar);
	
	printf("%s", retangulo(alt, lar, car));
}
