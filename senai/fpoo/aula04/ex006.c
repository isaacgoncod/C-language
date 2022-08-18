#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3, num4, num5, num6;
	
	printf("Digite um número inteiro : ");
	scanf("%d", &num1);
	printf("Digite um número inteiro : ");
	scanf("%d", &num2);
	printf("Digite um número inteiro : ");
	scanf("%d", &num3);
	printf("Digite um número inteiro : ");
	scanf("%d", &num4);
	printf("Digite um número inteiro : ");
	scanf("%d", &num5);
	printf("Digite um número inteiro : ");
	scanf("%d", &num6);
	
	if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5 && num1 > num6){
		printf("O maior numero inteiro que você digítou foi %d.", num1);
	}
	else if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5 && num2 > num6){
		printf("O maior numero inteiro que você digítou foi %d.", num2);
	}
	else if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5 && num3 > num6){
		printf("O maior numero inteiro que você digítou foi %d.", num3);
	}
	else if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5 && num4 > num6){
		printf("O maior numero inteiro que você digítou foi %d.", num4);
	}
	else if(num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4 && num5 > num6){
		printf("O maior numero inteiro que você digítou foi %d.", num5);
	}
	else{
		printf("O maior numero inteiro que você digítou foi %d.", num6);
	}
}
