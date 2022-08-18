#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Digíte um valor : ");
	scanf("%d", &n);
	
	if(n%2==0){
		printf("O valor %d é PAR", n);	
	}else {
		printf("O valor %d é ÍMPAR", n);
	}
	printf("\nACABOU");
}
