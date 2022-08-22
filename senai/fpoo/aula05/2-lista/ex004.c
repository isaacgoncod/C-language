#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL, "Portuguese");
		
		
	float sal, nsal, aumento;
		
	printf("Digíte o salário atual do funcionário : R$ ");
	scanf("%f", &sal);
	
	if(sal <= 280) {
		aumento = sal * 20 / 100;
		nsal = sal + aumento;
			
		printf("O salario antes do reajuste é de R$ %.2f. O com aumento de (20%%) R$ %.2f. O novo salário será de R$ %.2f", sal, aumento, nsal);
			
	}else if(sal > 280 && sal <= 700){
		
		aumento = sal * 15 / 100;
		nsal = sal + aumento;
			
		printf("O salario antes do reajuste é de R$ %.2f. O com aumento de (15%%) R$ %.2f. O novo salário será de R$ %.2f", sal, aumento, nsal);
		
	}else if(sal > 700 && sal <= 1500){
		
		aumento = sal * 10 / 100;
		nsal = sal + aumento;
			
		printf("O salario antes do reajuste é de R$ %.2f. O com aumento de (10%%) R$ %.2f. O novo salário será de R$ %.2f", sal, aumento, nsal);
			
	}else{
		
		aumento = sal * 5 / 100;
		nsal = sal + aumento;
		printf("O salario antes do reajuste é de R$ %.2f. O com aumento de (5%%) R$ %.2f. O novo salário será de R$ %.2f", sal, aumento, nsal);
		
	}
}
			

