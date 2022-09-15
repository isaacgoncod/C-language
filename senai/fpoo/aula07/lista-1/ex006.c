#include <stdio.h>
#include <locale.h>
#include <time.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
    int matriz[3][3], i, j;
    
    for(i = 0; i < 3; i++){
    	for(j = 0; j < 3; j++){
    		matriz[i][j] = rand()%10;
		}
	}
	for(i = 0; i < 3; i++){
    	for(j = 0; j < 3; j++){
    		printf("[%d]", matriz[i][j]);
		}
		printf("\n");
	}
}
