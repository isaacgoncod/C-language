#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float sal, desc, reajuste; 
	
	
	printf("Dig�te o valor de seu sal�rio : R$ ");
	scanf("%f", &sal);
	
	
	if(sal <= 1212.00){
		desc = sal * 7.5 / 100;
		reajuste = sal - desc;
		printf("Seu desconto ser� de R$ %.2f e seu sal�rio final de R$ %.2f", desc, reajuste);
	}
	else if(sal >= 1212.01 && sal <= 2427.35){
		desc = sal * 9 / 100;
		reajuste = sal - desc;
		printf("Seu desconto ser� de R$ %.2f e seu sal�rio final de R$ %.2f", desc, reajuste);
	}
	else if(sal >= 2427.36 && sal <= 3641.03){
		desc = sal * 12 / 100;
		reajuste = sal - desc;
		printf("Seu desconto ser� de R$ %.2f e seu sal�rio final de R$ %.2f", desc, reajuste);
	}
	else if(sal >= 3641.04 && sal <= 7087.22){
		desc = sal * 14 / 100;
		reajuste = sal - desc;
		printf("Seu desconto ser� de R$ %.2f e seu sal�rio final de R$ %.2f", desc, reajuste);
	}
	else if(sal >= 7087.23){
		desc = sal * 14 / 100;
		reajuste = sal - desc;
	    printf("Se seu sal�rio ultrapasssar R$ 7087,22.\n Ter� o teto m�ximo de desconto de (R$ %.2f)14%%, ou seja,\n seu sal�rio com desconto ser� de R$ %.2f", desc, reajuste);
	}
	else{
		printf("\nObrigado.");		
	}
}



