#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int i, num1, total = 0;
	
	
	for(i = 1; i <= 15; i++){
	printf("Dig�te um n�mero : ");
	scanf("%d", &num1);
		
		total = total + num1;
		
	}
		printf("%d", total);
}
	


