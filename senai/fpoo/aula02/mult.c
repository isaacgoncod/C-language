#include<stdio.h>
#include<locale.h>

int main(){	
	setlocale(LC_ALL,"");
	
	int a, b, c;
	
	printf("Digíte o valor de a : ");
	scanf("%d", &a);
	printf("Digíte o valor de b : ");
	scanf("%d", &b);
	
	c = a * b;  
	printf("O valor da expressão a * b : %d", c);
	
}
