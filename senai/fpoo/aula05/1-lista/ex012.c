#include <stdio.h>
#include <locale.h>
int main(){
	//Configurações e variáveis
	setlocale(LC_ALL,"");
	
	int i, num, men, man;
	
	for(i =1; i <= 10; i++){
		printf("\nDigíte um número : ");
		scanf("%d", &num);
		
		if(num == 1){
			man = num;
		}
		if(num > man){
			man = num;
		}
		if(num == 0){
			men = num;
		}
		if(num < men){
			men = num;
		}	
	}
	printf("\nO maior número digítado foi : %d ", man);
	printf("\nO menor número digítado foi : %d ", men);
}
