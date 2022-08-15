#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	 
	 int num1, num2;
	 
	 printf("Digíte o primeiro número : ");
	 scanf("%d", &num1);
	 printf("Digíte o segundo número : ");
	 scanf("%d", &num2);
	 
	 if(num1 > num2){
	 	printf("O número %d é maior que o %d.", num1, num2);
	 }else{
	 	printf("O número %d é maior que o %d.", num2, num1);
	 }
		
}
