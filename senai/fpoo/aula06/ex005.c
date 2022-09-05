#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
   	int valor[10], i, j, aux;
   	
	   
	for(i = 0; i < 10; i++){
		printf("Digíte o %dº valor : ", i + 1);
   		scanf("%d", &valor[i]);
	}
		for(i = 0; i < 10;i++){
			for(j = 0; j < 10;j++){
				if(valor[i] < valor[j]){
					aux = valor[i];
					valor[i] = valor[j];
					valor[j] = aux;
					
				}
			}
		}
	
	for(i = 0; i < 10; i++) {
		printf("%d ", valor[i])	;
	}
}

