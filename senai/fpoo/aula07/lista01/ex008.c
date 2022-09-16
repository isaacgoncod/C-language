#include <stdio.h>
#include <locale.h>
#include <time.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

	int matriz[5][5], i, j, maior = 0, menor = 26, linha = 0, coluna = 0;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			matriz[i][j] = rand()%26;
		}
	}
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("[%d]\t", matriz[i][j]);
		}
		printf("\n");
	}
	for(j = 0; j < 5; j++){
		if(maior < matriz[4][j]){
			maior = matriz[4][j];	
		}if(menor > matriz[4][j]){
			menor = matriz[4][j];
		}
	}
	printf("O maior número da linha 4: %d\nO menor número da linha 4: %d\n", maior, menor);
	
	maior = 0;
	menor = 26;
	
	for(i = 0; i < 5; i++){
		if(maior < matriz[i][3]){
			maior = matriz[i][3];	
		}if(menor > matriz[i][3]){
			menor = matriz[i][3];
		}
	}
	printf("O maior número da coluna 3: %d\nO menor número da coluna 3: %d\n", maior, menor);
}
