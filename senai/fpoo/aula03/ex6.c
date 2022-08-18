#include<stdio.h>
#include<locale.h>
#include<string.h>

/* Sabendo-se que a velocidade de cruzeiro de um avião 747-300 é de 900 km/h,
 faça um programa que leia uma distância (km),
  calcule e apresente na tela,
   quanto tempo (horas) será necessário para um 747-300 
   sobrevoar a distância informada.
   */
   
 void main () {
	setlocale(LC_ALL, "Portuguese");
	
	float v = 900, d, t;
	
	printf("Qual a distância(km) percorrida pelo avião ? : ");
	scanf("%f", &d);
	
	t = d / v;
	
	printf("O avião irá demorar %.2f Hora(s) para percorrer o trajeto.", t);
	
	
	
	
}
