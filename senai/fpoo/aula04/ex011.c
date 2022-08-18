#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	float preco, npreco;
	
	printf("Escolha um produto para saber o desconto :\n [1 - Camisa]\n [2 - Bermuda]\n [3 - Calça]\n");
	scanf("%d", &num);
	printf("Digíte o preço do produto : R$ ");
	scanf("%f", &preco);
	
	switch(num){
		case 1: 
			npreco = preco - (preco * 20 / 100);
			printf("As camisas estão com 20%% de desconto, passando de %.2f para %.2f", preco, npreco);
			break;
		
		case 2:
			npreco = preco - (preco * 10 / 100);
			printf("As bermudas estão com 10%% de desconto, passando de %.2f para %.2f", preco, npreco);	
			break;
		
		case 3:
			npreco = preco - (preco * 15 / 100);
			printf("As calças estão com 15%% de desconto, passando de %.2f para %.2f", preco, npreco);	
			break;
		
		default:
			printf("ERRO");
	}		
}
