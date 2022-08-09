#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float  preco, desconto, novovalor;
	char produto[20];
	
	printf("Produto : ");
	fflush(stdin);
	gets(produto);
	printf("Preço de %s : R$", produto );
	fflush(stdin);
	scanf("%f", &preco);
	printf("Desconto(%%) : ");
	fflush(stdin);
	scanf("%f", &desconto);
	
	novovalor = preco - (preco * desconto / 100); // formula para porcentagem 
	 
	 printf("O produto %s custava R$%.2f.\nPorém, com %.2f%% de desconto, passa a custar R$%.2f.", produto, preco, desconto, novovalor);
	
}
