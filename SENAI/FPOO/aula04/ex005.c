#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float preco, npreco;
	char nome[20];
	
	printf("Digíte o nome da mercadoria : ");
	gets(nome);
	printf("Digíte o preço da mercadoria : R$ ");
	scanf("%f", &preco);
	
	if(preco < 1000){
		printf("A mercadoria %s, está custando: R$ %.2f ",nome, (npreco = preco + (preco * 5 / 100)));
	}else{
		printf("A mercadoria %s, está custando: R$ %.2f ",nome, (npreco = preco - (preco * 7 / 100)));
	}
}
