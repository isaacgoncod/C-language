#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float sal, desc1, desc2, desc3, desc4;
	float reajuste1, reajuste2, reajuste3, reajuste4;
	
	printf("Dig�te o valor de seu sal�rio : R$ ");
	scanf("%f", &sal);
	
	desc1 = sal * 7.5 / 100;
	reajuste1 = sal - desc1;
	
	desc2 = sal * 9 / 100;
	reajuste2 = sal - desc2;
	
	desc3 = sal * 12 / 100;
	reajuste3 = sal - desc3;
	
	desc4 = sal * 14 / 100;
	reajuste4 = sal - desc4;
	
	if(sal <= 1212.00){
		printf("Seu desconto ser� de R$ %.2f e seu sal�rio final de R$ %.2f", desc1, reajuste1);
	}
	else if(sal >= 1212.01 || sal <= 2427.35){
		printf("Seu desconto ser� de R$ %.2f e seu sal�rio final de R$ %.2f", desc2, reajuste2);
	}
	else if(sal >= 2427.36 || sal <= 3641.03){
		printf("Seu desconto ser� de R$ %.2f e seu sal�rio final de R$ %.2f", desc3, reajuste3);
	}
	else if(sal >= 3641.04 || sal <= 7087.22){
		printf("Seu desconto ser� de R$ %.2f e seu sal�rio final de R$ %.2f", desc4, reajuste4);
	}
	else if(sal > 7087.22){
	printf("Se seu sal�rio ultrapasssar R$ 7087,22.\n Ter� o teto m�ximo de desconto de 14%%, ou seja,\n seu sal�rio com desconto ser� de R$ %.2f",desc4, reajuste4);
	}
	else{
	printf("\nObrigado.");		
	}
}



