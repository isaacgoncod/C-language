#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	char mercadoria[5][30];
	float preco[5];
	int i, p;
	
	for(i = 0; i < 5; i++){
		printf("Digíte a %do mercadoria : ", i + 1);
		gets(mercadoria[i]);
	}
	for(i = 0; i < 5; i++){
		printf("Digíte o preço da %do mercadoria : R$ ", i + 1);
		scanf("%f",&preco[i]);
	}
	for(i = 0; i < 5; i++){
		if(preco[i] < 1000){
			preco[i] = preco[i] + preco[i] * 5 / 100;
			printf("A mercadoria %s, terá um aumento de 5%% : R$ %.2f\n",mercadoria[i], preco[i]);
		}else{
			preco[i] = preco[i] + preco[i] * 7 / 100;
			printf("A mercadoria %s, terá um aumento de 7%% : R$ %.2f\n",mercadoria[i], preco[i]);
		}
	}
}
