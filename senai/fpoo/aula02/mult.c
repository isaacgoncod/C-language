#include<stdio.h>
#include<locale.h>

int main(){	
	setlocale(LC_ALL,"");
	
	int a, b, c;
	
	printf("Dig�te o valor de a : ");
	scanf("%d", &a);
	printf("Dig�te o valor de b : ");
	scanf("%d", &b);
	
	c = a * b;  
	printf("O valor da express�o a * b : %d", c);
	
}
