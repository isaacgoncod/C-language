#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

bool calcularMedia(float n1, float n2){
	
	float media = (n1 + n2) / 2;
	
	return (media >= 6);
	
}

int main(int argc, char*argv[]){
	
	printf("%d", calcularMedia(6, 7));
	
	return 0;
}

