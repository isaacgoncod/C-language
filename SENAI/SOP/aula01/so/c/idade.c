#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	char nome[15];
	
	printf("Dig�te seu nome: ");
	scanf("%s", &nome);
	printf("Dig�te seu idade: ");
	scanf("%d", &idade);
	
	if (idade < 10) {
		printf("Voc� � uma crian�a, %s", nome);
	}
	else if(idade < 19){
		printf("Voc� � um Adolescente, %s ", nome );
	}
	else if(idade < 24){
		printf("Voc� � um Jovem, %s ", nome );
    }
	else if(idade < 45){
		printf("Voc� � um Adulto, %s ", nome );	
    }
	else if(idade < 60){
		printf("Voc� � um Meia idade, %s ", nome );
    }
	else{
		printf("Voc� � um Idoso, %s ", nome );
  }
  printf("Segundo a OMS(Organiza��o Mundial da Sa�de).");
}
