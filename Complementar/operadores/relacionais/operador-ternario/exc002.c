#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, media;
	
	printf("Primeira nota : ");
	scanf("%f", &nota1);
	printf("Segunda nota : ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf("A média do alunno foi %.1f ", media);
	printf("a sua situação é %s", (media>=7) ? "APROVADO" : "REPROVADO");
}


	
