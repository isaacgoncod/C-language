#include<stdio.h>
#include<locale.h>
#include<string.h>

 void main () {
	setlocale(LC_ALL, "Portuguese");
	
	int in;
	float sal,nsal;
	char nome[30];
	
	printf("Dig�te seu nome : ");
	gets(nome);
	printf("Dig�te o valor de seu sal�rio atual : ");
	scanf("%f", &sal);
	printf("Porcentagem do reajuste : ");
	scanf("%d", &in);
	fflush(stdin); 
	
	nsal = (float) in/100 * sal + sal;
	printf("O valor do novo sal�rio com reajuste de %s ser� de : %.2f Reais ", nome, nsal);
	
}
