#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Dig�te um n�mero : ");
	scanf("%d", &num);
	
	printf("O n�mero %d que voc� dig�tou � %s. \n", num, (num%2==0) ?"PAR" : "�MPAR");
	
	}
