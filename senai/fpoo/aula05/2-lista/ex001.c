#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float peso, exc, multa;
	
	printf("Dig�te quantos kg de peixe voc� pescou hoje : (kg) ");
	scanf("%f", &peso);
	
	exc = peso - 50;
	multa = exc * 4;
	
	if(peso > 50){
		printf("Voc� pescou : %.2f kg.\nExcesso de : %.2f kg. \nPor ter excedido o quantidade m�xima de pesca de 50kg/pessoa,\n voc� ter� que pagar uma multa de R$ 4,00/kg � mais de pesca que ser� de : R$ %.2f", peso,exc, multa);
	}else{
		printf("Voc� pescou : %.2f kg.\nPor n�o ter excedido o quantidade de pesca permitida de 50kg/pessoa, n�o precisar� pagar a multa", peso);
	}
}
