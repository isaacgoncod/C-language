#include <stdio.h>
#include <locale.h>
#include <time.h>

void sorteio(char times[10][30]){
	srand(time(NULL));
	
	int i, sorteado, num;
	
	printf("Digíte 10 times para sortear os grupos : \n");
	for(i = 0; i < 10; i++){
		gets(times[i]);	
	}
	
	printf("Digíte quantos times cada grupo irá ter : ");
	scanf("%d", &num);
	
	for(i = 0; i < num; i++){
		sorteado = rand() % 10;
		printf("O sorteado foi : %s\n", times[sorteado]);
	}
	
}
void main(){
	setlocale(LC_ALL, "Portuguese");
	
	char times[10][30];
	
	sorteio(times[10]);
}

