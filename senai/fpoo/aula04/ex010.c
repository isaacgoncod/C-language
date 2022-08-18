#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, media;
	
	printf("Nota 1 : ");	
	scanf("%f", &nota1);
	printf("Nota 2 : ");	
	scanf("%f", &nota2);
	printf("Nota 3 : ");	
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3) / 3;
	printf("-------------- RESULTADOS ---------------\n");
	
	if(media >= 6){
		printf("\n\tMédia de %.2f\n\n \tAPROVADO\n", media);
	}else if(media < 6 && media >=4){
		printf("\n\tMédia de %.2f\n\n \tRECUPERAÇÃO\n", media);
	}else{
		printf("\n\tMédia de %.2f\n\n \tREPROVADO\n", media);
	}
	printf("------------------------------------------");
}
