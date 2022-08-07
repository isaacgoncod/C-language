#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	
	printf("Digíte um número qualquer : ");
	scanf("%d", &n1);
	
	printf("O número que você digítou é %s",  ?"ÍMPAR" : "PAR");
	
}
