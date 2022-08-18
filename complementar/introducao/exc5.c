#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digíte um número : ");
	scanf("%d", &num);
	
	printf("O número %d que você digítou é %s. \n", num, (num%2==0) ?"PAR" : "ÍMPAR");
	
	}
