#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float preco, npreco;
	char nome[20];
	
	printf("Dig�te o nome da mercadoria : ");
	gets(nome);
	printf("Dig�te o pre�o da mercadoria : R$ ");
	scanf("%f", &preco);
	
	if(preco < 1000){
		printf("A mercadoria %s, est� custando: R$ %.2f ",nome, (npreco = preco + (preco * 5 / 100)));
	}else{
		printf("A mercadoria %s, est� custando: R$ %.2f ",nome, (npreco = preco - (preco * 7 / 100)));
	}
}
