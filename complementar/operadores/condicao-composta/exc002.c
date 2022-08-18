#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	 
	time_t t;
	time(&t);
	struct tm *data;
	 
	data = localtime(&t);
	 
	int ano = data -> tm_year + 1900;
	int idade, idadeatual ;
	
	printf("Atualmente estamos no ano de %d.\n", ano);
	printf("em que ano você nasceu? ");
	scanf("%d", &idade);
	
	idadeatual = ano - idade;
	
	printf("Sua idade atual é de %d anos.\n",idadeatual);
	
	if(idadeatual >= 18){
		printf("Já fez 18 anos ou mais. Espero que tenha se alistado.");
	}else (idadeatual < 18); {
		
		printf("Ainda não completou 18 anos, mas fique de olho que sua vez chega!");
	}
}

