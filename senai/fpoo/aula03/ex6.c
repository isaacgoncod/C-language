#include<stdio.h>
#include<locale.h>
#include<string.h>

/* Sabendo-se que a velocidade de cruzeiro de um avi�o 747-300 � de 900 km/h,
 fa�a um programa que leia uma dist�ncia (km),
  calcule e apresente na tela,
   quanto tempo (horas) ser� necess�rio para um 747-300 
   sobrevoar a dist�ncia informada.
   */
   
 void main () {
	setlocale(LC_ALL, "Portuguese");
	
	float v = 900, d, t;
	
	printf("Qual a dist�ncia(km) percorrida pelo avi�o ? : ");
	scanf("%f", &d);
	
	t = d / v;
	
	printf("O avi�o ir� demorar %.2f Hora(s) para percorrer o trajeto.", t);
	
	
	
	
}
