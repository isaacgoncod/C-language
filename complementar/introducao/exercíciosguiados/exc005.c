#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, media;
	char aluno[20];
	
	 printf("Nome do aluno : ");
	 fflush(stdin);
	 gets(aluno);

	 printf("Nota 1 : ");
	 fflush(stdin); 
	 scanf("%f", &nota1);
 	 scanf("%f", &nota2);
	 
	 media = (nota1 + nota2) / 2;
	 
	 printf("O aluno %s tirou as notas %.1f e %.1f, com a média de %.1f. ", aluno, nota1, nota2, media);
}

