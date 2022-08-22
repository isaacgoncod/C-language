#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int num, i;
	int entrada = 1;
	
	while(entrada){
	printf("Digíte um número inteiro maior o que 0 : ");
	scanf("%d", &num);
	
	if(num > 0 && num < 32567) entrada = 0;
}
	
	for(i = 1; i <= num; i++){
		printf(" %d -", i);
		
}
}
