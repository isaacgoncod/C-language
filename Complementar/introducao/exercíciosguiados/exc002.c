#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num, dob;
	float ter;
	
	printf("Dig�te um n�mero : ");
	scanf("%d", &num);
	
	dob = num * 2;
	ter = (float) num / 3;
	
	printf("Analisando o n�mero %d, seu dobro � %d e a ter�a parte � %.2f. ", num, dob, ter);
}


