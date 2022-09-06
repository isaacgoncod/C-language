#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, aux, nums[100];
	
	srand(time(NULL));
		
	for(i = 0; i < 100; i++){
		nums[i] = rand() % 100;
	}
		
		for(i = 0; i < 100; i++ ){
			for(j = 0 ; j < 100; j++){
				if (nums[i] < nums[j]){
				 	aux = nums[i];
					nums[i] = nums[j];
					nums[j] = aux;
			}
		}
	}
	for(i = 0; i < 100; i++ ){
		printf(" {%d} ", nums[i]);	
	}
}

