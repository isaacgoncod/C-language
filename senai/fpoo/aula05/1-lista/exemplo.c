#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, soma, num;
	
	soma = 0;
	
	while(num = 0, num <= 4, num++){
		printf("Digíte um número : ");
		scanf("%d", &num);
		
		soma += num;
	}
	printf("A soma será de %d", soma);
}
