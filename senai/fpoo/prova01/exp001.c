#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade, dias;
	char sexo;
	
	printf("Dig�te a sua idade em anos: ");
	scanf("%d", &idade);
	fflush(stdin);
	
	printf("Dig�te o seu sexo (M ou F): ");
	scanf("%c", &sexo);
	
	printf("Dig�te a quantos dias que voc� doou sangue pela �ltima vez: ");
	scanf("%d", &dias);
	
	if(sexo == 'M' || sexo == 'm'){
		if(dias > 60){
			printf("Voc� est� APTO para doar sangue.");
		}else{
			printf("Voc� est� INAPTO para doar sangue.");
		}
	}else if(sexo == 'F' || sexo == 'f'){
		if(dias > 90){
			printf("Voc� est� APTO para doar sangue.");
		}else{
			printf("Voc� est� INAPTO para doar sangue.");
		}
	}
}
