#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int binario(int dec){
	int num;
	
	if(dec/2!=0){
		num = dec/2;
		binario(num);
		printf("%d",dec%2);
	}else{
		printf("%d",dec%2);
	}
	return 0;
}
float celsius(float cel){
	scanf("%f", &cel);
	
	cel = (cel - 32) / 1.8;
	
	printf("----------------PROCESSANDO----------------------\n\n");
	printf("Temperatura em  Celsius (°C): %.1f\n\n", cel);
	printf("-------------------------------------------------\n");
	
}
float fahrenheit(float fah){
	scanf("%f", &fah);
	
	fah = (fah * 1.8) + 32;
	
	printf("----------------PROCESSANDO----------------------\n\n");
	printf("Temperatura em  Fahrenheits (°F): %.1f\n\n", fah);
	printf("-------------------------------------------------\n");
	
}
bool numero(int num, int num2){
	
	if(num==num2){
		return true;
	}else{
		return false;
	}
}
int maior(int n1, int n2){
	if(n1 > n2){
		return n1;
	}else{
		return n2;
	}
}

void main(float argc, char*argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	float fah, cel;
	int dec,num,num2, n1, n2;
	
	printf("Digite um número decimal: ");
	scanf("%d", &dec);
	printf("----------------PROCESSANDO----------------------\n");
	binario(dec);
	
	printf("\nDigite a temperatura em Celsius : ");
	fahrenheit(fah);
	
	printf("Digite a temperatura em Fahrenheit: ");
	celsius(cel);
	 
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	printf("Digite outro numero: ");
	scanf("%d",&num2);
	
	printf("1 = Numeros iguais\n0 = Numeros diferentes\n");
	printf("%d\n",numero(num,num2));

	printf("Digíte dois números inteiros: ");
	scanf("%d%d", &n1, &n2);
	printf("O maior número é o %d\n", maior(n1,n2));
	
}

