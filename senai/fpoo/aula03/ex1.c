#include<stdio.h>
#include<locale.h>

/*Desenvolva um programa que leia três variáveis (a, b, c)
 e resolva a expressão: ( a + b ) / c. 
*/

int main(){
	setlocale(LC_ALL,"");
		
	int a, b, c, d;
	
	printf("Digíte o valor de a : ");
	scanf("%d", &a);
	printf("Digíte o valor de b : ");
	scanf("%d", &b);
	printf("Digíte o valor de c : ");
	scanf("%d", &c);
	
	d = (a + b) / c;
	printf("O resultado da expressão (a + b) / c = %d", d); 
		
}
