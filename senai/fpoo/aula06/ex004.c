#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, nums[10];
	
	for(i = 0; i < 10; i++){
		printf("Dig�te um valor : ");
		scanf("%d", &nums[i]);
		
	}
	
//	for(i = 0; i < 10; i++){	
		printf("Informe qual a casa, para saber qual n�mero a representa : ");
		scanf("%d", &i)	;
		printf("O valor [%d] est� na casa [%d]\n", nums[i], i);
//	}
}
