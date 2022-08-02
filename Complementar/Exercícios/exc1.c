#include<stdio.h>
#include<locale.h>
#include<string.h>

 void main () {
	setlocale(LC_ALL, "");
	  
	char nome [10];
	 
	 printf("Dígite seu nome: ");
	 scanf("%s", &nome);
	 printf("Muito prazer em te conhecer %s", nome);
	 
		
}
