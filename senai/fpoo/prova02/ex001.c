#include<stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a;
	int b;
	int soma;
	
	printf("Digite dois numeros inteiros respectivamente para soma-los: ");
	scanf("%d%d", &a, &b);
	
	soma = a + b;
	
	printf("Soma: %d", soma);
}

