#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");  
	
	int i, num = -1;
	
	while(num < 0 || num > 10){
		
		printf("Digíte um número de 0 a 10 : ");
		scanf("%d", &num);
}
	for(i = 0; i <= 10; i++){
		printf("%d x %d = %d\n", num, i, (num * i));
}
	
	
	
	
	
	
	
	
	
}
