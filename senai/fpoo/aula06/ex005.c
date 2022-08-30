#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
   	int valor[10], i, aux;
   	
   	while (i < 10 ){
   		printf("Digíte o %dº valor : ", i + 1);
   		scanf("%d", &valor[i]);
   		i++;
	   }
	   
	for(i = 0; i < 10; i++)   {
		if(valor[i] < valor[  - i] ){
			aux = valor[i];
			valor[i] = valor[  - i];
			valor[ - i] = aux;
		}
		
	}
	
	for(i = 0; i < 10; i++) {
		printf("%d ", valor[i])	;
	}
}

