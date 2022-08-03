#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<math.h>

/* Desenvolva um programa que leia o nome de uma cidade,
 o número total de eleitores e o número total de votos apurados
  na última eleição. O programa deverá calcular e exibir
   a porcentagem de participação dos eleitores desta cidade
    na última eleição.
*/

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	char cidade[20];
	int eleitores, votos;
	float part;
	
	printf("Nome de sua cidade : ");
	gets(cidade);
	printf("Número total de eleitores : ");
	scanf("%d", &eleitores);
	printf("Votos apurados : ");
	scanf("%d", &votos);
	
	 part = (float) votos / eleitores * 100;
	 
	 printf("A portentagem %% de participantes nesta ultima eleição foi de : %.2f%%", part);
}
