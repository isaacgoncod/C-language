#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float sal, desc;
	
	printf("Dig�te o valor de seu sal�rio : R$ ");
	scanf("%f", &sal);


	switch(sal){		
		
		case 1 : printf("O desconto de seu sal�rio ser� de %.2f, com sal�rio final de %.2f",(desc = sal * 7.5 / 100));
		
		default : printf("a");
	}
	
}


