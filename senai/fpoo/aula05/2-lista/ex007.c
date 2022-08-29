#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL, "Portuguese");
		
		int pergunta[5], i = 0, soma = 0;
		
		pergunta[1] = -1;
		pergunta[2] = -1;
		pergunta[3] = -1;
		pergunta[4] = -1;
		pergunta[5] = -1;
		
		printf("1 - SIM 0 - NÃO\n");
		printf("------------------------------------\n");
		
		while(pergunta[1] < 0 || pergunta[1] > 1 ){
			printf("Telefonou para a vítima?\n");
			scanf("%d", &pergunta[1]);
		}
		while(pergunta[2] < 0 || pergunta[2] > 1 ){
			printf("Esteve no local do crime?\n");
			scanf("%d", &pergunta[2]);
		}
		while(pergunta[3] < 0 || pergunta[3] > 1 ){
			printf("Mora perto da vítima?\n");
			scanf("%d", &pergunta[3]);
		}
		while(pergunta[4] < 0 || pergunta[4] > 1 ){
			printf("Devia para a vítima?\n");
			scanf("%d", &pergunta[4]);
		}
		while(pergunta[5] < 0 || pergunta[5] > 1 ){
			printf("Já trabalhou com a vítima?\n");
			scanf("%d", &pergunta[5]);
		}
		while(i <= 5){
			
			soma = soma + pergunta[i];
			i++;
		}
		
		printf("\n---------- ANÁLISANDO OS DADOS ------------\n");
		
		if(soma == 2){
			printf("\nSUSPEITO\n");
			
		}else if(soma == 3 || soma == 4){
			printf("\nCÚMPLICE\n");
			
		}else if(soma == 5){
			printf("\nASSASSINO\n");
		
		}else{
			printf("\nLIBERADO\n");
		}
		
		
		
	
		
		
		
}
