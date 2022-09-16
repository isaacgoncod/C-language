#include <stdio.h>
#include <locale.h>
#include <time.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
    int matriz[5][5], i, j, contPar = 0, contImpar = 0;
    
    for(i = 0; i < 5; i++){
    	for(j = 0; j < 5; j++){
    		matriz[i][j] = rand()%25;
		}
	}
	printf("-------------------MATRIZ-----------------------\n");
	for(i = 0; i < 5; i++){
    	for(j = 0; j < 5; j++){
    		printf("[%2d]\t", matriz[i][j]);
    	}
    	printf("\n");
    }
    printf("-------------------PARES-----------------------\n");
	for(i = 0; i < 5; i++){
    	for(j = 0; j < 5; j++){
    		if(matriz[i][j] %2 == 0){
    			contPar++;
    			printf("[%2d]\t", matriz[i][j]);
			}else{
				printf("[  ]\t");
			}
		}
			printf("\n");
	}
	printf("------------------ÍMPARES------------------------\n");
	for(i = 0; i < 5; i++){
    	for(j = 0; j < 5; j++){
    		if(matriz[i][j] %2 == 1){
    			contImpar++;
    			printf("[%2d]\t", matriz[i][j]);
			}else{
				printf("[  ]\t");
			}
		}
		printf("\n");
	}
	printf("------------------QUANTIDADES------------------------\n\n");
	printf("Quantidade de números pares: %d\nQuantidade de números impares: %d\n", contPar, contImpar);
}
