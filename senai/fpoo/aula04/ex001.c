#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float preco, reajuste;
	
	printf("Digíte o preço do produto : R$ ");
	scanf("%f", &preco);
	
	
	if(preco >= 1000 ){
		reajuste = preco - (preco * 8 / 100);
		printf("PARABÉNS!!\n Você gastou mais de R$ 1000  em produtos,\n por isso terá um desconto de 8%%,\n passando de R$ %.2f para R$ %.2f", preco, reajuste);
	}else{
		printf("Você precisa gastar mais de R$ 1000 \n para ser previlegiado com o desconto. ");
	}
}
