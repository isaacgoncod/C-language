#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float preco, reajuste;
	
	printf("Dig�te o pre�o do produto : R$ ");
	scanf("%f", &preco);
	
	reajuste = preco - (preco * 8/100);
	
	if(preco >= 1000 ){
		printf("PARAB�NS!!\n Voc� gastou mais de 1000 reais em produtos,\n por isso ter� um desconto de 8%%,\n passando de R$%.2f para R$%.2f", preco, reajuste);
	}else{
		printf("Voc� precisa gastar mais do que mil reais \n para ser previlegiado com o desconto. ");
	}
}
