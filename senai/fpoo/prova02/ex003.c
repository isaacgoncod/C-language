#include<stdio.h>
#include<locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	char conceito[5][10];
	char nome[5][25];
	float notaA[5];
	float notaB[5];
	int i = 0;
	float total[5];
	float media[5];
	
	
	printf("Digite o nome, primeira nota e segunda nota ( nota : 0 a 10) de 5 alunos respectivamente:\n ");
	for(i = 0; i < 5; i++){
		scanf("%s", &nome[i]);
		scanf("%f", &notaA[i]);
		scanf("%f", &notaB[i]);
		
		 total[i] += (notaA[i] + notaB[i]);
		 media[i] = total[i] / 2;
	}
	
	for(i = 0; i < 5; i++){	
		conceito[i](media[i] >= 5) ? "Aprovado" : "Reprovado";
		printf("Nome: %s\nMedia: %.2f\nConceito: %s", nome[i], media[i], conceito[i]);
	}
}

