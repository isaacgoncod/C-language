#include<stdio.h>
#include<string.h>
#include<locale.h>//biblioteca de acentos

/* Desenvolva um programa que leia a velocidade de um carro (km/h)
 e a distância a ser percorrida (km) por ele.
  Calcule e apresente na tela, quanto tempo (horas)
 será necessário para o carro percorrer a distância informada.
*/

int main(){
	setlocale(LC_ALL,"");//codigo para acessar a biblioteca
	
	int v, d;
	float t;
	
	printf("Velocidade do carro (Km/h): ");
	scanf("%d", &v);
	printf("Distância a ser percorrida pelo carro (km): ");
	scanf("%d", &d);
	
	t = (float) v / d; 
	
	printf("O carro irá completar o trajeto em : %.2lf Hora(s)", t);
	
	return 0;
}
  
