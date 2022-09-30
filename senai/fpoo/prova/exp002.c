#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade[7], nomes[7][30], i;
	
	printf("Digíte o nome e a idade de 7 pessoas respectivamente:\n");
	
	for(i = 0; i < 7; i++){
		scanf("%s%d", &nomes[i], &idade[i]);
	}
	
	for(i = 0; i < 7; i++){
		if(idade[i] < 12){
			printf("%s Criança\n", nomes[i]);
		}else if(idade[i] >= 12 && idade[i] <= 17 ){
			printf("%s Jovem\n", nomes[i]);
		}else if(idade[i] >= 18 && idade[i] <= 30 ){
			printf("%s Adulto\n", nomes[i]);
		}else if(idade[i] >= 31 && idade[i] <= 65 ){
			printf("%s Meia-Idade\n", nomes[i]);
		}else if(idade[i] > 65){
			printf("%s Idoso\n", nomes[i]);
		}
	
	}
}
