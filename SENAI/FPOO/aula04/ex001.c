#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float preco, reajuste;
	
	printf("Dig�te o pre�o do produto : R$ ");
	scanf("%f", &preco);
	
	
	if(preco >= 1000 ){
		reajuste = preco - (preco * 8 / 100);
		printf("PARAB�NS!!\n Voc� gastou mais de R$ 1000  em produtos,\n por isso ter� um desconto de 8%%,\n passando de R$ %.2f para R$ %.2f", preco, reajuste);
	}else{
		printf("Voc� precisa gastar mais de R$ 1000 \n para ser previlegiado com o desconto. ");
	}
}
