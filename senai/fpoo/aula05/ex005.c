#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, num2, i;
	
	printf("Dig�te um n�mero : ");
	scanf("%d", &num);
	printf("Dig�te o segundo n�mero : ");
	scanf("%d", &num2);
	
	for(i = num; i <= num2; i++){
		if(i % 2==0){
		printf("%d\n", i);
		}
	}
	



}
