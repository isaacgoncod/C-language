#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cor;
	
	printf("Dig�te a cor do sem�foro: \n [1 - verde]\n [2 - amarelo]\n [3 - vermelho]\n");
	scanf("%d", &cor);
	
	if(cor == 1){
		printf("Voc� escolheu verde ent�o pode ir.\n");
	}else if(cor == 2){
		printf("Voc� escolheu amarelo ent�o fique atento.\n");
	}else if(cor == 3){
		printf("Voc� escolheu vermelho ent�o espere.\n" );
	}else{
		printf("Op��o Inv�lida");
	}
	printf("fim");
}
