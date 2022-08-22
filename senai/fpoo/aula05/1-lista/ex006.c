#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int i, soma = 0;

	
	for(i = 0; i <= 100; i++){
		soma += i;
}
		printf("A soma entre 0 e 100 é de %d", soma);
	
}
