#include<stdio.h>
#include<locale.h>
#include<string.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int tc, talq, alq, vig, c;
	
	printf("Quantos caminh�es possui ? : ");
	scanf("%d", &c);
	printf("Quantos alqueires ? : ");
	scanf("%d", &alq);
	
	tc = 18 * c ;
	talq = 250 * alq;
	
	vig = talq / tc;
	
	printf("Com %d caminh�es e %d alqueires,\n ser� necess�rio um total de %d viagem(s). ", c, alq, vig);
	
	
}
