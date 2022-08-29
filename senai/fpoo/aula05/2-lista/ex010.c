#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL, "Portuguese");
		
		int quantidade, i = 1;
		float soma = 0, preco, dinheiro;
		
		printf("Digíte a quantidade de produtos : ");
		scanf("%d", &quantidade);
		
		while(i <= quantidade){
			printf("Produto %d : R$ ", i);
			scanf("%f", &preco);
			
			soma = soma + preco;
			i++;
		}
		printf("Total : R$ %.2f\n", soma);
		
		printf("Dinheiro : R$ ");
		scanf("%f", &dinheiro);
		
		printf("Troco : R$ %.2f \n", dinheiro - soma);
		printf("---------------ATÉ A PRÓXIMA----------------");
		
		
			
		
		
		
}
		
