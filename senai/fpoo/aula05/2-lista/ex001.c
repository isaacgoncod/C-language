#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float peso, exc, multa;
	
	printf("Digíte quantos kg de peixe você pescou hoje : (kg) ");
	scanf("%f", &peso);
	
	exc = peso - 50;
	multa = exc * 4;
	
	if(peso > 50){
		printf("Você pescou : %.2f kg.\nExcesso de : %.2f kg. \nPor ter excedido o quantidade máxima de pesca de 50kg/pessoa,\n você terá que pagar uma multa de R$ 4,00/kg á mais de pesca que será de : R$ %.2f", peso,exc, multa);
	}else{
		printf("Você pescou : %.2f kg.\nPor não ter excedido o quantidade de pesca permitida de 50kg/pessoa, não precisará pagar a multa", peso);
	}
}
