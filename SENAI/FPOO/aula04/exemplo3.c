#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	
	int cor;
	
	printf("Dig�te a cor do sem�foro: \n [1 - verde]\n [2 - amarelo]\n [3 - vermelho]\n");
	scanf("%d", &cor);
	
	
	switch(cor){
		case 1:
			printf("voc� escolheu verde ent�o pode ir.\n");
		break;
		case 2:
			printf("voc� escolheu amarelo ent�o fique atento.\n");
		break;
		case 3:
			printf("voc� escolheu vermelho ent�o espere.\n");
		break;
		default:
			printf("Cor Inv�lida\n");	
	}
	printf("fim");
}
