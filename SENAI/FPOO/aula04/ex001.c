#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float preco, reajuste;
	
	printf("Digíte o preço do produto : R$ ");
	scanf("%f", &preco);
	
	reajuste = preco - (preco * 8/100);
	
	if(preco >= 1000 ){
		printf("PARABÉNS!!\n Você gastou mais de 1000 reais em produtos,\n por isso terá um desconto de 8%%,\n passando de R$%.2f para R$%.2f", preco, reajuste);
	}else{
		printf("Você precisa gastar mais do que mil reais \n para ser previlegiado com o desconto. ");
	}
}
