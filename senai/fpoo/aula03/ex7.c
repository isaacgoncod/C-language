#include<stdio.h>
#include<locale.h>
#include<string.h>
/* Um caminh�o consegue transportar 18 toneladas de laranjas em uma viagem que
 faz entre a fazenda e a f�brica de suco de laranja.
 Um alqueire de terra produz em m�dia 250 toneladas de laranjas.
 Fa�a um programa que leia quantos caminh�es e quantos alqueires uma fazenda produtora de laranjas possui,
  calcule e apresente na tela quantas viagens de caminh�o ser�o 
  necess�rias para transportar toda a colheita de laranjas.
*/

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int tc, talq, alq, c;
	float vig;
	
	printf("Quantos caminh�es possui ? : ");
	scanf("%d", &c);
	printf("Quantos alqueires ? : ");
	scanf("%d", &alq);
	
	tc = 18 * c ;
	talq = 250 * alq;
	
	vig = (float) talq / tc;
	
	printf("Com %d caminh�es e %d alqueires,\n ser� necess�rio um total de %.1f viagem(s). ", c, alq, vig);
	
	
}
