#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int i, num1, num2, num3, num4, num5;
	
	printf("Dig�te um n�mero : ");
	scanf("%d", &num1);
	printf("Dig�te o segundo n�mero : ");
	scanf("%d", &num2);
	printf("Dig�te o terceiro n�mero : ");
	scanf("%d", &num3);
	printf("Dig�te o quarto n�mero : ");
	scanf("%d", &num4);
	printf("Dig�te o quinto n�mero : ");
	scanf("%d", &num5);
	
	for(i = num1; i <= num2 && i <= num3 && i <= num4 && i <= num5; i++ ){
		}

			printf("%d", i);
	
}
