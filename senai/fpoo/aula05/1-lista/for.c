#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	for(i = 0; i < 10; i++){
		printf("%d\n", i);
	}
	
}
