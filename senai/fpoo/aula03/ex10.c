#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<math.h>

/* Desenvolva um programa que leia o nome de uma cidade,
 o n�mero total de eleitores e o n�mero total de votos apurados
  na �ltima elei��o. O programa dever� calcular e exibir
   a porcentagem de participa��o dos eleitores desta cidade
    na �ltima elei��o.
*/

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char cidade[20];
	int eleitores, votos;
	float part;
	
	printf("Nome de sua cidade : ");
	gets(cidade);
	printf("N�mero total de eleitores : ");
	scanf("%d", &eleitores);
	printf("Votos apurados : ");
	scanf("%d", &votos);
	
	 part = (float) votos / eleitores * 100;
	 
	 printf("A portentagem %% de participantes nesta ultima elei��o foi de : %.2f%%", part);
}
