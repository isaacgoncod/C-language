#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	char nome[15];
	
	printf("Digíte seu nome: ");
	scanf("%s", &nome);
	printf("Digíte seu idade: ");
	scanf("%d", &idade);
	
	if (idade < 10) {
		printf("Você é uma criança, %s", nome);
	}
	else if(idade < 19){
		printf("Você é um Adolescente, %s ", nome );
	}
	else if(idade < 24){
		printf("Você é um Jovem, %s ", nome );
    }
	else if(idade < 45){
		printf("Você é um Adulto, %s ", nome );	
    }
	else if(idade < 60){
		printf("Você é um Meia idade, %s ", nome );
    }
	else{
		printf("Você é um Idoso, %s ", nome );
  }
  printf("Segundo a OMS(Organização Mundial da Saúde).");
}
