#include<stdio.h>
#include<locale.h>
#include<string.h>

/* Desenvolva um programa que leia um n�mero �n� inteiro,
 positivo e diferente de zero e apresente na tela:
  n � 1, e tamb�m n + 1.
*/

 void main () {
	setlocale(LC_ALL, "Portuguese");
	
	int n, nA, nB;
	
	printf("Dig�te um valor para n : ");
	scanf("%d", &n);
	
	nA = n + 1;
	nB = n - 1;
	
	printf("O valor da express�o n + 1 � : %d\n ", nA);
	printf("O valor da express�o n - 1 � : %d ", nB);
	
	
	
}
