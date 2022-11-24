#include<stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a;
	int b;
	int c;
	int media;
	
	printf("Digite dois numeros inteiros respectivamente para soma-los: ");
	scanf("%d%d%d", &a, &b, &c);
	
	media = a + b + c;
	media /= 3;
	
	printf("Media: %d", media);
}

