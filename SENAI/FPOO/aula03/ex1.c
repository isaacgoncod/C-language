#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
		
	int a, b, c, d;
	
	printf("Dig�te o valor de a : ");
	scanf("%d", &a);
	printf("Dig�te o valor de b : ");
	scanf("%d", &b);
	printf("Dig�te o valor de c : ");
	scanf("%d", &c);
	
	d = (a + b) / c;
	printf("O resultado da express�o (a + b) / c = %d", d); 
	
	return 0;
	
}
