#include<stdio.h>
#include<locale.h>
#include<string.h>

/* Desenvolva um programa que leia o nome e o sal�rio de uma pessoa,
 depois leia o valor do �ndice percentual (%) de reajuste do sal�rio. Calcule e apresente na tela,
  o valor do novo sal�rio e o nome da pessoa.
*/

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
	
	nsal = (float) sal + sal * in/100;
	printf("O valor do novo sal�rio com reajuste(%%) de %s ser� de : %.2f Reais ", nome, nsal);
	
}
