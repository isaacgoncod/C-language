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
	
	if(num1 > num2 || num2 > num3 || num3 > num4 || num4 > num5 || num5 > num6 || num6 > num1){
		printf("O maior numero inteiro que você digítou foi %d.", num);
	}else{
		printf("Opção Invalida.");
	}
}
