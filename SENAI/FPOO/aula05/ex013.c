#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int i, num1, num2, num3, num4, num5;
	
	printf("Digíte um número : ");
	scanf("%d", &num1);
	printf("Digíte o segundo número : ");
	scanf("%d", &num2);
	printf("Digíte o terceiro número : ");
	scanf("%d", &num3);
	printf("Digíte o quarto número : ");
	scanf("%d", &num4);
	printf("Digíte o quinto número : ");
	scanf("%d", &num5);
	
	for(i = num1; i <= num2 && i <= num3 && i <= num4 && i <= num5; i++ ){
		}

			printf("%d", i);
	
}
