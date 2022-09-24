#include <stdio.h>
#include <locale.h>
#include <time.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
    int matriz[3][3], i, j, maior = 0, linha = 0, coluna = 0;
    
    for(i = 0; i < 3; i++){
    	for(j = 0; j < 3; j++){
    		matriz[i][j] = rand()%10;
		}
	}
	for(i = 0; i < 3; i++){
    	for(j = 0; j < 3; j++){
    		printf("[%d]", matriz[i][j]);
    		if(maior < matriz[i][j]){
    			maior = matriz[i][j];
    			linha = i;
    			coluna = j;
			}
		}
		printf("\n");
	}
	printf("O maior n�mero da matriz �: %d\nSua posi��o �: [%d,%d]\n", maior,linha + 1, coluna + 1);
}
