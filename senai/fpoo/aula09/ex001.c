#include <stdio.h>
#include <locale.h>
#include <time.h>

void sorteio(char nomes[10][30]){
	srand(time(NULL));
	
	int i, sorteado;
	
	printf("Digíte 10 nomes para sortear : \n");
	
	for(i = 0; i < 10; i++){
		gets(nomes[i]);	
	}
	sorteado = rand() % 10;
	printf("O sorteado foi : %s", nomes[sorteado]);
	
}
void main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nomes[10][30];
	
	sorteio(nomes[10]);
}



