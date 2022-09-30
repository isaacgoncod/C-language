#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade, dias;
	char sexo;
	
	printf("Digíte a sua idade em anos: ");
	scanf("%d", &idade);
	fflush(stdin);
	
	printf("Digíte o seu sexo (M ou F): ");
	scanf("%c", &sexo);
	
	printf("Digíte a quantos dias que você doou sangue pela última vez: ");
	scanf("%d", &dias);
	
	if(sexo == 'M' || sexo == 'm'){
		if(dias > 60){
			printf("Você está APTO para doar sangue.");
		}else{
			printf("Você está INAPTO para doar sangue.");
		}
	}else if(sexo == 'F' || sexo == 'f'){
		if(dias > 90){
			printf("Você está APTO para doar sangue.");
		}else{
			printf("Você está INAPTO para doar sangue.");
		}
	}
}
