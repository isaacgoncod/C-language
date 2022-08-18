#include<stdio.h>
#include<locale.h>
#include<string.h>

/* Desenvolva um programa que leia o nome de um time de futebol, 
o número de vitórias e o número de empates.
 O programa deverá calcular e apresentar na tela,
  o nome do time e o total de pontos.
   Lembrando que a vitória vale 3 pontos e o empate vale 1 ponto.
*/
 void main () {
	setlocale(LC_ALL, "Portuguese");
	
	int vit, emp, pntA, pntB, pntC;
	char time[30];
	
	printf("Qual é seu time ? : ");
	gets(time);
	printf("Quantos jogos ele venceu ? : ");
	scanf("%d", &vit);
	printf("Quantos jogos empatados : ");
	scanf("%d", &emp);
	
	pntA = vit * 3;
	pntB = emp;
	pntC = pntA + pntB;
	printf("O %s está com um total de %d pontos", time, pntC); 
}
