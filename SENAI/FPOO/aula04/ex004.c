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
	
	if(ladoa == ladob && ladoa == ladoc){
		printf("Todos os lados são iguais, ou seja, o triângulo é EQUILÁTERO.");
	}
	else if(ladoa == ladob || ladoa == ladoc || ladob == ladoc ){
		printf("Somente dois lados são iguais, ou seja, o triângulo é ISÓSCELES.");
	}
	else{
		printf("Todos os lados são diferentes, ou seja, o triângulo é ESCALENO.");
		
	}
}
