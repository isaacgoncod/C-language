#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int i, num1, num2, total = 0;
	
	printf("Digíte um número : ");
	scanf("%d", &num1);
	printf("Digíte o segundo número : ");
	scanf("%d", &num2);
	
	for(i = num1; i <= num2; i++){
		if(i % 2==0){
		total = total +  i ;
		}
	}
		printf("%d", total);
}
	


