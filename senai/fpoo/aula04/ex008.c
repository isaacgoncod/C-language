#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	 
	 int num1, num2;
	 
	 printf("Dig�te o primeiro n�mero : ");
	 scanf("%d", &num1);
	 printf("Dig�te o segundo n�mero : ");
	 scanf("%d", &num2);
	 
	 if(num1 > num2){
	 	printf("O n�mero %d � maior que o %d.", num1, num2);
	 }else{
	 	printf("O n�mero %d � maior que o %d.", num2, num1);
	 }
		
}
