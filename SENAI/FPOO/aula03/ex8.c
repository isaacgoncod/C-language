#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<math.h>

/* Desenvolva um programa que leia o raio (cm)
 e a altura (cm) de um cilindro.
  Calcule e mostre a área (cm2) e o volume (cm3) do cilindro.
*/

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float r, h, a, v, c;
	
	printf("Valor do raio(cm) : ");
	scanf("%.2f", &r);
	fflush(stdin);
	
	printf("Valor da altura(cm) : ");
	scanf("%.2f", &h);
	
	printf("%f", a);
}
