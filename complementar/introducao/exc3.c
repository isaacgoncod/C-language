#include<stdio.h>
#include<locale.h>
#include<string.h>

 void main () {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3; 
	char sexo1, sexo2, sexo3;
	char nome[15], nome1[15], nome2[15];
	  
	 printf("Cadastrando a primeira pessoa :\n ");
	 printf("NOME : ");
	 gets(nome);
	 printf("SEXO [M/F] : ");
	 sexo1 = getchar ();
	 printf("NOTA : ");
	 scanf("%f", &n1);
	 fflush(stdin);
	 
	 printf("***********************************\n");
	 
	 printf("Cadastrando a segunda pessoa ;\n");
	 
	 fflush(stdin); 
	 printf("NOME : ");
	 gets(nome1);
	 printf("SEXO [M/F] : ");
	 sexo2 = getchar ();
	 printf("NOTA : ");
	 scanf("%f", &n2);
	 fflush(stdin);
	 
	 printf("***********************************\n");
	 
	 printf("Cadastrando a terceira pessoa :\n");
	 
	 printf("NOME : ");
	 gets(nome2);
	 printf("SEXO [M/F] : ");
	 sexo3 = getchar ();
	 printf("NOTA : ");
	 scanf("%f", &n3);	 
	 fflush(stdin);
	 
     printf("***********************************\n");

	 printf("Dados processados : \n");
	 printf("NOME\t              SEXO\t NOTA\t\n");
	 printf("%s\t               %c\t %.2f\t\n ", nome, sexo1, n1);
	 printf("%s\t               %c\t %.2f\t\n ", nome1, sexo2, n2);
	 printf("%s\t               %c\t %.2f\t\n ", nome2, sexo3, n3);
}
