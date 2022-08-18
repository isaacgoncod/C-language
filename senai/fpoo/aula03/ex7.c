#include<stdio.h>
#include<locale.h>
#include<string.h>
/* Um caminhão consegue transportar 18 toneladas de laranjas em uma viagem que
 faz entre a fazenda e a fábrica de suco de laranja.
 Um alqueire de terra produz em média 250 toneladas de laranjas.
 Faça um programa que leia quantos caminhões e quantos alqueires uma fazenda produtora de laranjas possui,
  calcule e apresente na tela quantas viagens de caminhão serão 
  necessárias para transportar toda a colheita de laranjas.
*/

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int tc, talq, alq, c;
	float vig;
	
	printf("Quantos caminhões possui ? : ");
	scanf("%d", &c);
	printf("Quantos alqueires ? : ");
	scanf("%d", &alq);
	
	tc = 18 * c ;
	talq = 250 * alq;
	
	vig = (float) talq / tc;
	
	printf("Com %d caminhões e %d alqueires,\n será necessário um total de %.1f viagem(s). ", c, alq, vig);
	
	
}
