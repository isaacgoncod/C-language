#include<stdio.h>
#include<locale.h>
#include<string.h>

 void main () {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3; 
	char sexo1, sexo2, sexo3;
	char nome[30], nome1[30], nome2[30];
	 
	 printf("Cadastrando a primeira pessoa :\n ");
	 
	 printf("NOME : ");
	 gets(nome);
	 printf("SEXO [M/F] : ");
	 sexo1 = getchar ();
	 printf("NOTA : ");
	 scanf("%f", &n1);
	 fflush(stdin);
	 
	 printf("Cadastrando a segunda pessoa ;\n");
	 
	 fflush(stdin); 
	 printf("NOME : ");
	 gets(nome);
	 printf("SEXO [M/F] : ");
	 sexo2 = getchar ();
	 printf("NOTA : ");
	 scanf("%f", &n2);
	 fflush(stdin);
	 
	 printf("Cadastrando a terceira pessoa :\n");
	 
	 printf("NOME : ");
	 gets(nome);
	 printf("SEXO [M/F] : ");
	 sexo3 = getchar ();
	 printf("NOTA : ");
	 scanf("%f", &n3);	 
	 
	 printf("Dados processados : \n");
	 
	 
}
