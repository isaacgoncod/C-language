#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int num = -1, num2 = -1, i, total = 0;
	
	while(num < 0 || num > 34567){
		printf("Digíte um número : ");
		scanf("%d", &num);
}
	while(num2 < 0 || num2 > 34567){
		printf("Digíte o segundo número : ");
		scanf("%d", &num2);
}
//	algoritmo de troca
	if(num2 < num){
		int aux = num2;
		num2 = num;
		num = aux;
}
//	algoritmo de soma acumulada
	for(i = num; i <= num2; i++){
		total = total +  i ;
	}
		printf(" A soma entre os valores declarados é de %d", total);
}
