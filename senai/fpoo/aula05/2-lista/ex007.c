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
		
		printf("1 - SIM 0 - N�O\n");
		printf("------------------------------------\n");
		
		while(pergunta[1] < 0 || pergunta[1] > 1 ){
			printf("Telefonou para a v�tima?\n");
			scanf("%d", &pergunta[1]);
		}
		while(pergunta[2] < 0 || pergunta[2] > 1 ){
			printf("Esteve no local do crime?\n");
			scanf("%d", &pergunta[2]);
		}
		while(pergunta[3] < 0 || pergunta[3] > 1 ){
			printf("Mora perto da v�tima?\n");
			scanf("%d", &pergunta[3]);
		}
		while(pergunta[4] < 0 || pergunta[4] > 1 ){
			printf("Devia para a v�tima?\n");
			scanf("%d", &pergunta[4]);
		}
		while(pergunta[5] < 0 || pergunta[5] > 1 ){
			printf("J� trabalhou com a v�tima?\n");
			scanf("%d", &pergunta[5]);
		}
		while(i <= 5){
			
			soma = soma + pergunta[i];
			i++;
		}
		
		printf("\n---------- AN�LISANDO OS DADOS ------------\n");
		
		if(soma == 2){
			printf("\nSUSPEITO\n");
			
		}else if(soma == 3 || soma == 4){
			printf("\nC�MPLICE\n");
			
		}else if(soma == 5){
			printf("\nASSASSINO\n");
		
		}else{
			printf("\nLIBERADO\n");
		}
		
		
		
	
		
		
		
}
