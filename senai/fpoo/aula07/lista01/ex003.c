#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	char mercadoria[5][15];
	float preco[5];
	int i, p;
	
	printf("Digíte o nome de 5 mercadorias :\n");
	for(i = 0; i < 5; i++){
		gets(mercadoria[i]);
	}
	
	printf("Digíte o preço da %do mercadoria :\n");
	for(i = 0; i < 5; i++){
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
