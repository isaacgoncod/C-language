#include <stdio.h>
#include <locale.h>
int main(){
	//Configura��es e vari�veis
	setlocale(LC_ALL,"");
	
	int i, num, maiornum = 0;
	
	for(i = 0; i < 10; i++){
		num = -1;
		
		while(num < 0 || num > 32767){
			printf("Dig�te o %d� n�mero : ", i + 1);
			scanf("%d", &num);
		}
//		algoritmo maior n�mero
		if(num > maiornum) maiornum = num;
	}
	
	printf("\nO maior n�mero dig�tado foi : %d ", maiornum
	);
}
