#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int num, num2, i;
	
	printf("Digíte um número : ");
	scanf("%d", &num);
	printf("Digíte o segundo número : ");
	scanf("%d", &num2);
	
	for(i = num; i <= num2; i++){
		printf("%d\n", i);
	}


}
