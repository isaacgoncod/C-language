#include<stdio.h>
#include<locale.h>
#include<string.h>

 void main () {
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	float m;
	char resp;
	char nome [30];
	
	printf("Digite um n�mero inteiro : ");
	scanf("%d", &n); 
	
	printf("Dig�te um n�mero real : ");
	scanf("%f", &m);
	
	fflush(stdin); // limpador de programa de entrada (se n�o limpar o exe fecha)
	printf("Dig�te uma letra : ");
	resp = getchar;	//scanf("%c", &resp); // para ler um caract�re use o = getchar();
	
	fflush(stdin);
	printf("Dig�te seu nome inteiro : ");
	gets(nome); //scanf("%s", nome); n�o suporta espa�os entre as letras
	 
	 
	
	 
		 
		 
}
