#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char letra;
	
	printf("Digíte uma letra : ");
	fflush(stdin);
	scanf("%c", &letra);
	
	printf("Antes da letra %c temos a letra %c. Depois temos a letra %c.", letra, (letra - 1), (letra + 1));
	
}
