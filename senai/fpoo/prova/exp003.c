#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ladoA[8], ladoB[8], ladoC[8], i;
	
	
	printf("Dig�te os tr�s lados de um tri�ngulo respectivamente:\n");
	
	for(i = 0; i < 8; i++){
		scanf("%d%d%d", &ladoA[i], &ladoB[i], &ladoC[i]);
	}
	
	for(i = 0; i < 8; i++){
		if(ladoA[i] == ladoB[i] && ladoB[i]== ladoC[i]){
			printf("EQUIL�TERO\n");
		}else if(ladoA[i] != ladoB[i] && ladoB[i] != ladoC[i] && ladoA[i] != ladoC[i]){
			printf("ESCALENO\n");
		}else{
			printf("IS�SCELES\n");
		}
	}
	
	}
	

