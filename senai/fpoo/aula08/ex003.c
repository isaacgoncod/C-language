#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

float fahrenheit(float fah){
	scanf("%f", &fah);
	
	fah = (fah * 1.8) + 32;
	
	printf("----------------PROCESSANDO----------------------\n\n");
	printf("Temperatura em  Fahrenheits (°F): %.1f\n\n", fah);
	printf("-------------------------------------------------\n");
}
void main(float argc, char*argv[]){
setlocale(LC_ALL, "Portuguese");
	
float fah;

printf("\nDigite a temperatura em Celsius : ");
fahrenheit(fah);
	
}
