#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int binario(int dec){
	int num;
	
	if(dec/2!=0){
		num = dec/2;
		binario(num);
		printf("%d",dec%2);
	}else{
		printf("%d",dec%2);
	}
	return 0;
}
void main(float argc, char*argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	int dec;
	
	printf("Digite um número decimal: ");
	scanf("%d", &dec);
	printf("----------------PROCESSANDO----------------------\n");
	binario(dec);
}
