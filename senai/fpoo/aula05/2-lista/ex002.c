#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float hora, hrmes, ir, inss, sind, sal, salbruto;
	
	printf("Dig�te quanto voc� ganha por horas trabalhadas : R$  ");
	scanf("%f", &hora);
	printf("Dig�te a quantidade de horas trabalhadas por m�s : ");
	scanf("%f", &hrmes);
	
	salbruto = hora * hrmes;
	ir = salbruto * 11 / 100;
	inss = salbruto * 8 / 100;
	sind = salbruto * 5 / 100;
	sal = salbruto - (ir + inss + sind);
	
	printf("Seu sal�rio bruto � de : R$ %.2f.\n Imposto de renda (IR) (11%%) : R$ %.2f. \n INSS (8%%) : R$ %.2f.\n Sindicato (5%%) : R$ %.2f.\n Sal�rio final de : R$ %.2f.", salbruto, ir, inss, sind, sal); 

	



}
