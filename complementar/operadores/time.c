#include <stdio.h>
#include <locale.h>
#include <time.h>

void main () {
	setlocale(LC_ALL, "Portuguese");
	
	time_t tempo;
	time(&tempo);
	struct tm * data;
	data = localtime(&tempo);
	
	int dia = data -> tm_mday, mes = data -> tm_mon + 1, ano = data -> tm_year + 1900;
	
	printf("Hoje é dia %d do mês %d de %d", dia, mes, ano);
	
}
