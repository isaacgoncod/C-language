#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");  
	
	int i, num;
	
	printf("Dig�te um n�mero : ");
	scanf("%d", &num);
	
	for(i = 0; i <= 10; i++){
		printf("%d x %d = %d\n", num, i, (num * i));
	}
	
	
	
	
	
	
	
	
	
}
