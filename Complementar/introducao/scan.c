#include<stdio.h>
#include<locale.h>
#include<string.h>

 void main () {
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	float m;
	char resp;
	char nome [30];
	
	printf("Digite um número inteiro : ");
	scanf("%d", &n); 
	
	printf("Digíte um número real : ");
	scanf("%f", &m);
	
	fflush(stdin); // limpador de programa de entrada (se não limpar o exe fecha)
	printf("Digíte uma letra : ");
	resp = getchar;	//scanf("%c", &resp); // para ler um caractére use o = getchar();
	
	fflush(stdin);
	printf("Digíte seu nome inteiro : ");
	gets(nome); //scanf("%s", nome); não suporta espaços entre as letras
	 
	 
	
	 
		 
		 
}
