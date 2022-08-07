#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num, dob;
	float ter;
	
	printf("Digíte um número : ");
	fflush(stdin);
	scanf("%d", &num);
	
	dob = num * 2;
	ter = (float) num / 3;
	
	printf("Analisando o número %d, seu dobro é %d e sua terça parte é %.2f. ", num, dob, ter);
}
