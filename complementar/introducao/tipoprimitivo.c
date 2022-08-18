#include<stdio.h>
#include<locale.h>
#include<string.h>

 void main () {
	setlocale(LC_ALL, "Portuguese");
	 
	 int idade = 33;
	 float peso = 55.5;
	 char sexo = 'M';
	 char nome[10] = "Isaac";
	 
	printf("%s é do sexo %c, tem %d anos e pesa %.2fKg", nome, sexo, idade, peso);
}
