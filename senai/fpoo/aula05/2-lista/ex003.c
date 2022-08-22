#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	float area, lata, galao, plata, pgalao, cobert = 6;
	
	printf("Digíte o tamanho em metros quadrados (m²) da área à ser pintada : ");
	scanf("%f", &area);
	
	lata = area / (18 * cobert);
	galao = area / (3.6 * cobert);
	
	plata = lata * 80;
	pgalao = galao * 25; 
	
	printf(" Quantidade de latas (18L/lata) : %.2f. Preço : R$ %.2f.\nQuantidade de galões (3,6L/galão) : %.2f . Preço : R$ %.2f. ", lata, plata, galao, pgalao);
	
}
