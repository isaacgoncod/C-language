#include <stdio.h>
#include <locale.h>
#include <time.h>

void sorteio(char times[40][30]){
	srand(time(NULL));
	
	int i, sorteado, num;
	
	printf("Dig�te 40 times para sortes os grupos : \n");
	for(i = 0; i < 40; i++){
		gets(times[i]);	
	}
	
	printf("Dig�te quantos times cada grupo ir� ter : ");
	scanf("%d", &num);
	
	for(i = 0; i < num; i++){
		sorteado	= rand() % 10;
		printf("O sorteado foi : %s\n", nomes[sorteado]);
	}
	
}
void main(){
	setlocale(LC_ALL, "Portuguese");
	
	char times[40][30];
	
	sorteio(times[40]);
}

