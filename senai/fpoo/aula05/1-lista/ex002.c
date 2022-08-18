#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i = 200;
	
	while(i >= 1){
	
		printf("%d\n", i);
		i--;
	}
}
