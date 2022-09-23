#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

float celsius(float cel){
	scanf("%f", &cel);
	
	cel = (cel - 32) / 1.8;
	
	printf("----------------PROCESSANDO----------------------\n\n");
	printf("Temperatura em  Celsius (°C): %.1f\n\n", cel);
	printf("-------------------------------------------------\n");
	
}
void main(float argc, char*argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	float cel;
	
	printf("Digite a temperatura em Fahrenheit: ");
	celsius(cel);
}
