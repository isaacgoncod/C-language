#include<stdio.h>
#include<locale.h>
#include<string.h>

/* Desenvolva um programa que leia o raio (cm)
 e a altura (cm) de um cilindro.
  Calcule e mostre a �rea (cm2) e o volume (cm3) do cilindro.
*/

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float raio, area, altura, volume;
	
	printf("Dig�te o valor do raio(cm2): ");
	scanf("%f", &raio);
	printf("Dig�te o valor da altura(cm2): ");
	scanf("%f", &altura);
	
	area = (raio * raio * 3.1415) * 2; 
	volume = (raio * raio * 3.1415) * altura;
	
	printf("A �rea do cilindro � de %.2f(cm2) e o volume � %.2f(cm3).", area, volume);
	
}
