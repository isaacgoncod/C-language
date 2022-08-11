#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float sal, reajuste;
	int filho;
	
	printf("Digíte o valor de seu salário atual : R$ ");
	scanf("%f", &sal);
	printf("Digíte a quantidade de filhos : ");
	scanf("%d", &filho);
	
	reajuste = sal + (filho * 45);
	
	if(sal <= 2000){
		printf("Você tem direito ao salário família.\nPor isso seu salário passará ser de R$ %.2f para R$ %.2f.\n  ",sal, reajuste);
	}else{
		printf("Você não tem direito ao salário família, por possuir renda maior que R$2000,00");
	}
}
