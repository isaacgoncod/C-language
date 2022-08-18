#include<stdio.h>
#include<locale.h>
#include<string.h>

/* Desenvolva um programa que leia o nome e o salário de uma pessoa,
 depois leia o valor do índice percentual (%) de reajuste do salário. Calcule e apresente na tela,
  o valor do novo salário e o nome da pessoa.
*/

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
	
	nsal = (float) sal + sal * in/100;
	printf("O valor do novo salário com reajuste(%%) de %s será de : %.2f Reais ", nome, nsal);
	
}
