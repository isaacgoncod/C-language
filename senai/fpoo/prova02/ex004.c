#include<stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float distancia;
	float velocidade;
	float tempo;
	
	printf("Digite a distancia(Km) entre as duas cidades e o tempo(hr) de viagem respectivamente:\n");
	scanf("%f%f", &distancia, &tempo);
	
	velocidade = distancia  / tempo ;
	
	printf("A Velocidade Media da viagem foi de : %.2f(km/h)", velocidade);
	
}

