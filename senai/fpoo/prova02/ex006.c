#include<stdio.h>
#include<locale.h>
#include<string.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[5][25];
	char auxn[25];
	int idade[5];
	int i = 0;
	int j = 0;
	int aux;
	
	printf("Digite o nome e idade de 5 pessoas respectivamente:\n");
	for(i = 0; i < 5; i++){
		scanf("%s%d", &nome[i], &idade[i]);
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(idade[i] > idade[j]){
				aux = idade[i];
				idade[i] = idade[j];
				idade[j] = aux;
				
				strcpy(auxn, nome[i]);		
				strcpy(nome[i], nome[j]);
				strcpy(nome[j], auxn);
			}
		}
	}
	
	printf("A pessoa mais velha e : %s, %d anos.", nome[0], idade[0]);
	
}
