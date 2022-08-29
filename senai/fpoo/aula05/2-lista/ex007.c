#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL, "Portuguese");
		
		int quantidade, i = 1;
		float soma = 0, preco = 0.18;
		
		printf("Digíte a quantidade de pães : ");
		scanf("%d", &quantidade);
		
		while(i <= quantidade){
			soma = soma + preco;
			i++;
		}
		
		printf("O preço a ser pago é de : R$ %.2f", soma);
			
		
		
		
}
