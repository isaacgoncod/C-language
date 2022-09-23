#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int fatorial(int num){
	
	int i;
	
	for(i = num - 1; i >= 1; i--){
		num = num * i;
	}
	return num;
}

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digíte um número para saber seu fatorial: %d");
	scanf("%d", &num);
	
	printf("Seu fatorial é : %d", fatorial(num));
	
}
