#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, tabulacao = 20;
	
	for(i = 10; i <= 200; i++){
		
		if(i < 100) printf("0");
		printf("%d\t", i);
		
		if(tabulacao == i) printf("\n");
		tabulacao += 10;
	}



}	
