#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float ladoa, ladob, ladoc;
	
	printf("Dig�te o valor do primeiro lado : ");
	scanf("%f", &ladoa);
	printf("Dig�te o valor do segundo lado : ");
	scanf("%f", &ladob);
	printf("Dig�te o valor do terceiro lado : ");	
	scanf("%f", &ladoc);
	
	if(ladoa == ladob && ladoa == ladoc){
		printf("Todos os lados s�o iguais, ou seja, o tri�ngulo � EQUIL�TERO.");
	}
	else if(ladoa == ladob || ladoa == ladoc || ladob == ladoc ){
		printf("Somente dois lados s�o iguais, ou seja, o tri�ngulo � IS�SCELES.");
	}
	else{
		printf("Todos os lados s�o diferentes, ou seja, o tri�ngulo � ESCALENO.");
		
	}
}
