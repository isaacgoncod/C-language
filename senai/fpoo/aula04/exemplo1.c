#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cor;
	
	printf("Digíte a cor do semáforo: \n [1 - verde]\n [2 - amarelo]\n [3 - vermelho]\n");
	scanf("%d", &cor);
	
	if(cor == 1){
		printf("Você escolheu verde então pode ir.\n");
	}else if(cor == 2){
		printf("Você escolheu amarelo então fique atento.\n");
	}else if(cor == 3){
		printf("Você escolheu vermelho então espere.\n" );
	}else{
		printf("Opção Inválida");
	}
	printf("fim");
}
