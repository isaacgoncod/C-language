#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL, "Portuguese");
		
		int quantidade, i = 1;
		float soma = 0, preco = 0.18;
		
		printf("Dig�te a quantidade de p�es : ");
		scanf("%d", &quantidade);
		
		while(i <= quantidade){
			soma = soma + preco;
			i++;
		}
		
		printf("O pre�o a ser pago � de : R$ %.2f", soma);
			
		
		
		
}
