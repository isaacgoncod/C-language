#include <stdio.h>
#include <locale.h>
int main(){
	//Configura��es e vari�veis
	setlocale(LC_ALL,"");
	
	int i, num, men, man;
	
	for(i =1; i <= 10; i++){
		printf("\nDig�te um n�mero : ");
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
	printf("\nO maior n�mero dig�tado foi : %d ", man);
	printf("\nO menor n�mero dig�tado foi : %d ", men);
}
