#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1;
	
	printf("Dig�te um n�mero qualquer : ");
	scanf("%d", &n1);
	
	printf("O n�mero que voc� dig�tou � %s",  ?"�MPAR" : "PAR");
	
}
