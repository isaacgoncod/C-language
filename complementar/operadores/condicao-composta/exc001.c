#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Dig�te um valor : ");
	scanf("%d", &n);
	
	if(n%2==0){
		printf("O valor %d � PAR", n);	
	}else {
		printf("O valor %d � �MPAR", n);
	}
	printf("\nACABOU");
}
