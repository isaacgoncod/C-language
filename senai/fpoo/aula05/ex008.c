#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int i, num1, num2, total = 0;
	
	printf("Dig�te um n�mero : ");
	scanf("%d", &num1);
	printf("Dig�te o segundo n�mero : ");
	scanf("%d", &num2);
	
	for(i = num1; i <= num2; i++){
		if(i % 2==0){
		total = total +  i ;
		}
	}
		printf("%d", total);
}
	


