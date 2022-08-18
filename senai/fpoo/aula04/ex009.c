#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float sal, nsal;
	
	printf("Digíte seu salário para saber o reajuste : ");
	scanf("%f", &sal);
	
	if(sal >= 1500.00 && sal < 1750.00){
		nsal = sal + (sal * 15 / 100);
		printf("Seu salário teve um aumento de 15%%. R$ %.2f para R$ %.2f.", sal, nsal);
	}else if(sal >= 1750.00 && sal < 2000.00 ){
		nsal = sal + (sal * 12 / 100);
		printf("Seu salário teve um aumento de 12%%. R$ %.2f para R$ %.2f.", sal, nsal);
	}else if(sal >= 2000.00 && sal < 3000.00 ){
		nsal = sal + (sal * 9 / 100);
		printf("Seu salário teve um aumento de 9%%. R$ %.2f para R$ %.2f.", sal, nsal);
	}else if (sal >= 3000.00 ){
		nsal = sal + (sal * 6 / 100);
		printf("Seu salário teve um aumento de 6%%. R$ %.2f para R$ %.2f.", sal, nsal);
	}else{
		printf("erro");
	}
}
