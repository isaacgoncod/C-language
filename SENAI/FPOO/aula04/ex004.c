#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float ladoa, ladob, ladoc;
	
	printf("Dig�te o valor de a : ");
	scanf("%f", &ladoa);
	printf("Dig�te o valor de b : ");
	scanf("%f", &ladob);
	printf("Dig�te o valor de c : ");	
	scanf("%f", &ladoc);
	
	if(ladoa == ladob == ladoc){
		printf("Todos os lados s�o iguais, ou seja, o tri�ngulo � EQUIL�TERO.");
	}else if(ladob == ladoc){
		printf("Todos os lados s�o iguais, ou seja, o tri�ngulo � EQUIL�TERO.");
	}else if(ladoc != ladoa){
		printf("Somente dois lados s�o iguais, ou seja, o tri�ngulo � ESCALENO.");
	}else{
		printf("\nAcabou");
	}
}
