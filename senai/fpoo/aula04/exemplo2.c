#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	char cor[20], result[20];
	
	printf("Dig�te a cor do sem�foro: ");
	gets(cor);
	
	if(strcmp(cor, "verde") == 0){
		printf("Pode ir.", result);
	}else if(strcmp(cor, "vermelho") == 0){
		printf("Espere.");
	}else if(strcmp(cor, "amarelo") == 0){
		printf("Aten��o!");
	}else{
		printf("Op��o Inv�lida.");
	}	
}
