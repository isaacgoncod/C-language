#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float sal, reajuste;
	int filho;
	
	printf("Dig�te o valor de seu sal�rio atual : R$ ");
	scanf("%f", &sal);
	printf("Dig�te a quantidade de filhos : ");
	scanf("%d", &filho);
	
	reajuste = sal + (filho * 45);
	
	if(sal <= 2000){
		printf("Voc� tem direito ao sal�rio fam�lia.\nPor isso seu sal�rio passar� ser de R$ %.2f para R$ %.2f.\n  ",sal, reajuste);
	}else{
		printf("Voc� n�o tem direito ao sal�rio fam�lia, por possuir renda maior que R$2000,00");
	}
}
