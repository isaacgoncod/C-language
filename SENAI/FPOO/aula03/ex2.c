#include<stdio.h>
#include<string.h>
#include<locale.h>//biblioteca de acentos

int main(){
	setlocale(LC_ALL,"");//codigo para acessar a biblioteca
	
	int v, d;
	double t;
	
	printf("Velocidade do carro (Km/h): ");
	scanf("%d", &v);
	printf("Dist�ncia a ser percorrida pelo carro (km): ");
	scanf("%d", &d);
	
	t = (double) v / d; 
	printf("O carro ir� completar o trajeto em : %.2lf Hora(s)", t);
	
	return 0;
}
  
