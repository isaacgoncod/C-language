#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nomes[5][10];
	float salarios[5], percentual;
	int i;
	
	printf("Digíte os nomes dos 5 funcionários : \n");
	
	for(i = 0; i < 5; i++){
		gets(nomes[i]);
	}
	
	printf("Digíte os 5 salários respectivamente : \n");
	
	for(i = 0; i < 5; i++){
		do{
			scanf("%f", &salarios[i]);
		}while(salarios[i] < 0 || salarios[i] > 10000000);
	}
	
	printf("Digíte o percentual(%%) de reajuste : \n");
		do{
			
			scanf("%f", &percentual);
		}while(percentual < 0 || percentual >1000000);
		
	for(i = 0; i < 5; i++){
		salarios[i] = salarios[i] + salarios[i] * percentual / 100;
		printf("%s, novo salário : R$ %.2f \n", nomes[i], salarios[i]);
	}
}
