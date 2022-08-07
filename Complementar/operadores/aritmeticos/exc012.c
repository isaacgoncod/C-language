#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, media;
	char nome [20];
	
	printf("Nome do aluno : ");
	fflush(stdin);
	gets(nome);
	printf("NOTA 1 : ");
	fflush(stdin);
	scanf("%f", &nota1);
	printf("NOTA 2 : ");
	fflush(stdin);
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
		
	printf("O aluno %s tirou notas %.1f e %.1f e ficou com média %.1f", nome, nota1, nota2, media);
	
	
}
