#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float ladoa, ladob, ladoc;
	
	printf("Digíte o valor do primeiro lado : ");
	scanf("%f", &ladoa);
	printf("Digíte o valor do segundo lado : ");
	scanf("%f", &ladob);
	printf("Digíte o valor do terceiro lado : ");	
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
