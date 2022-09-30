#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, j, aux;
	float votos[6], eleitores, porcentagem[6]; 
	char nomes[6][30], auxn[30]; 
	
	printf("Digíte o nome e a quantidade de votos de 6 candidatos respectivamente:\n");
	
	for(i = 0; i < 6; i++){
		scanf("%s%f", &nomes[i], &votos[i]);
	}
	
	printf("Digíte a quantidade de eleitores da cidade: ");
	scanf("%f", &eleitores);
	
	for(i = 0; i < 6; i++){
		for(j = 0;j < 5; j++){
			if(votos[i] > votos[j]){
			
				aux=votos[i];
				votos[i]=votos[j];
				votos[j]=aux;
				
				strcpy(auxn, nomes[i]);
				strcpy(nomes[i], nomes[j]);
				strcpy(nomes[j], auxn);
				
			}
		}		
	}
	printf("O candidato com mais votos foi o: %s\n", nomes[0]);
	
	for(i = 0; i < 6; i++){
		porcentagem[i] =  votos[i] / eleitores * 100;
		printf("%s, %.1f. %.1f %% \n", nomes[i], votos[i], porcentagem[i]);
	}
	
	if(porcentagem[0] > 51){
		printf("NÃO HAVERÁ Segundo turno");
	}else{
		printf("HAVERÁ Segundo turno");
	}
	
}
