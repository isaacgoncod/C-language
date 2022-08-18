#include<stdio.h>
#include<locale.h>
#include<string.h>

/* exemplo de comentário em multiplas linhas
*/

 void main () {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Oi, \ntudo \nbem ?\n"); // \n comando para quebra de linha 
	
	printf("Oi, \"tudo bem\" ?\n"); // \ para evidenciar as áspas 
	
	printf("Oi, \ttudo \tbem ?\n"); 
	
}
