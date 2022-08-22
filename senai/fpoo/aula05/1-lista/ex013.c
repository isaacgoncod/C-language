#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int a, b, c, d, e, num, menor = 32767, i;
	
	for(i = 0; i < 5; i++){
		num = -1;
		while(num < 0 || num > 34567){
			printf("Digíte o %dº número : ", i + 1);
			scanf("%d", &num);
		}
		
		if(num < menor) menor = num;
		if(num < maior) maior = num;
		
	}
	
	

}
	

