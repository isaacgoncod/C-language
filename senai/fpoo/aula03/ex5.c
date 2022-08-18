#include<stdio.h>
#include<locale.h>
#include<string.h>

/* Desenvolva um programa que leia um número ”n” inteiro,
 positivo e diferente de zero e apresente na tela:
  n – 1, e também n + 1.
*/

 void main () {
	setlocale(LC_ALL, "Portuguese");
	
	int n, nA, nB;
	
	printf("Digíte um valor para n : ");
	scanf("%d", &n);
	
	nA = n + 1;
	nB = n - 1;
	
	printf("O valor da expressão n + 1 é : %d\n ", nA);
	printf("O valor da expressão n - 1 é : %d ", nB);
	
	
	
}
