#include<stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float raio;
	float altura;
	float area;
	float volume;
	float pi = 3.1415;
	
	printf("Digite o raio(cm) e altura(cm) do cilindro respectivamente:\n");
	scanf("%f%f", &raio, &altura);
	
	area = (raio * raio * pi * 2) + (2 * pi * raio * altura); 
	volume = raio * raio * pi * altura;
	
	printf("A área do cilindro é de %.2f(cm2) e o volume é %.2f(cm3).", area, volume);
	
	
	
}

