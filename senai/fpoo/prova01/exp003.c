#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ladoA[8], ladoB[8], ladoC[8], i;
	
	
	printf("Digíte os três lados de um triângulo respectivamente:\n");
	
	for(i = 0; i < 8; i++){
		scanf("%d%d%d", &ladoA[i], &ladoB[i], &ladoC[i]);
	}
	
	for(i = 0; i < 8; i++){
		if(ladoA[i] == ladoB[i] && ladoB[i]== ladoC[i]){
			printf("EQUILÁTERO\n");
		}else if(ladoA[i] != ladoB[i] && ladoB[i] != ladoC[i] && ladoA[i] != ladoC[i]){
			printf("ESCALENO\n");
		}else{
			printf("ISÓSCELES\n");
		}
	}
	
	}
	

