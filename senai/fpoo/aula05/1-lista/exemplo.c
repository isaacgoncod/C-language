#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, soma, num;
	
	soma = 0;
	
	while(num = 0, num <= 4, num++){
		printf("Dig�te um n�mero : ");
		scanf("%d", &num);
		
		soma += num;
	}
	printf("A soma ser� de %d", soma);
}
