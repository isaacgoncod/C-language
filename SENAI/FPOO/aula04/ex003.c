#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float sal, desc;
	
	printf("Digíte o valor de seu salário : R$ ");
	scanf("%f", &sal);


	switch(sal){		
		
		case 1 : printf("O desconto de seu salário será de %.2f, com salário final de %.2f",(desc = sal * 7.5 / 100));
		
		default : printf("a");
	}
	
}


