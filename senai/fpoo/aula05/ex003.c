#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int num, i;
	
	printf("Dig�te um n�mero inteiro : ");
	scanf("%d", &num);
	
	for(i = 0; i <= num; i++){
		printf("%d\n", i);
	}
}
