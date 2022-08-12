#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float ladoa, ladob, ladoc;
	
	printf("Digíte o valor de a : ");
	scanf("%f", &ladoa);
	printf("Digíte o valor de b : ");
	scanf("%f", &ladob);
	printf("Digíte o valor de c : ");	
	scanf("%f", &ladoc);
	
	if(ladoa == ladob == ladoc){
		printf("Todos os lados são iguais, ou seja, o triângulo é EQUILÁTERO.");
	}else if(ladob == ladoc){
		printf("Todos os lados são iguais, ou seja, o triângulo é EQUILÁTERO.");
	}else if(ladoc != ladoa){
		printf("Somente dois lados são iguais, ou seja, o triângulo é ESCALENO.");
	}else{
		printf("\nAcabou");
	}
}
