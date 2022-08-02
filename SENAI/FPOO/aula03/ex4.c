#include<stdio.h>
#include<locale.h>
#include<string.h>

 void main () {
	setlocale(LC_ALL, "Portuguese");
	
	int vit, emp, pnt1, pnt2, pnt3;
	char time[30];
	
	printf("Qual é seu time ? : ");
	gets(time);
	printf("Quantos jogos ele venceu ? : ");
	scanf("%d", &vit);
	printf("Quantos jogos empatados : ");
	scanf("%d", &emp);
	
	pnt1 = vit * 3;
	pnt2 = emp;
	pnt3 = pnt1 + pnt2;
	printf("O %s está com um total de %d pontos", time, pnt3); 
}
