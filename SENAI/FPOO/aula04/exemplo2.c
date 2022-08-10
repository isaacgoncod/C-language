#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	char cor[20], result[20];
	
	printf("Digíte a cor do semáforo: ");
	gets(cor);
	
	if(strcmp(cor, "verde") == 0){
		printf("Pode ir.", result);
	}else if(strcmp(cor, "vermelho") == 0){
		printf("Espere.");
	}else if(strcmp(cor, "amarelo") == 0){
		printf("Atenção!");
	}else{
		printf("Opção Inválida.");
	}	
}
