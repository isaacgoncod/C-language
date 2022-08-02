#include<stdio.h>
#include<locale.h>
#include<string.h>

 void main () {
	setlocale(LC_ALL, "Portuguese");
	
	int in;
	float sal,nsal;
	char nome[30];
	
	printf("Digíte seu nome : ");
	gets(nome);
	printf("Digíte o valor de seu salário atual : ");
	scanf("%f", &sal);
	printf("Porcentagem do reajuste : ");
	scanf("%d", &in);
	fflush(stdin); 
	
	nsal = (float) in/100 * sal + sal;
	printf("O valor do novo salário com reajuste de %s será de : %.2f Reais ", nome, nsal);
	
}
