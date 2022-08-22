#include <stdio.h>
#include <locale.h>
int main(){
	//Configurações e variáveis
	setlocale(LC_ALL,"");
	
	int i, num, maiornum = 0;
	
	for(i = 0; i < 10; i++){
		num = -1;
		
		while(num < 0 || num > 32767){
			printf("Digíte o %dº número : ", i + 1);
			scanf("%d", &num);
		}
//		algoritmo maior número
		if(num > maiornum) maiornum = num;
	}
	
	printf("\nO maior número digítado foi : %d ", maiornum
	);
}
