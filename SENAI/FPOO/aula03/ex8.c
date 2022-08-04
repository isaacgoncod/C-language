#include<stdio.h>
#include<locale.h>
#include<string.h>

/* Desenvolva um programa que leia o raio (cm)
 e a altura (cm) de um cilindro.
  Calcule e mostre a área (cm2) e o volume (cm3) do cilindro.
*/

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float raio, area, altura, volume;
	
	printf("Digíte o valor do raio(cm2): ");
	scanf("%f", &raio);
	printf("Digíte o valor da altura(cm2): ");
	scanf("%f", &altura);
	
	area = (raio * raio * 3.1415) * 2; 
	volume = (raio * raio * 3.1415) * altura;
	
	printf("A área do cilindro é de %.2f(cm2) e o volume é %.2f(cm3).", area, volume);
	
}
