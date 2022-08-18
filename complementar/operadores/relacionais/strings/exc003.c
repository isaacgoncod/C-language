#include <stdio.h>
#include <string.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a;
	a = 15 ^ 7;
	
	printf("%f", a);
}
