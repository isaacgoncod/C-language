#include<stdio.h>
#include<string.h>
#include<locale.h>//biblioteca de acentos

/* Desenvolva um programa que leia a velocidade de um carro (km/h)
 e a dist�ncia a ser percorrida (km) por ele.
  Calcule e apresente na tela, quanto tempo (horas)
 ser� necess�rio para o carro percorrer a dist�ncia informada.
*/

int main(){
	setlocale(LC_ALL,"");//codigo para acessar a biblioteca
	
	int v, d;
	float t;
	
	printf("Velocidade do carro (Km/h): ");
	scanf("%d", &v);
	printf("Dist�ncia a ser percorrida pelo carro (km): ");
	scanf("%d", &d);
	
	t = (float) v / d; 
	
	printf("O carro ir� completar o trajeto em : %.2lf Hora(s)", t);
	
	return 0;
}
  
