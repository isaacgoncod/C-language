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
//	algoritimo de troca
	if(num2 < num){
		int aux = num2;
		num2 = num;
		num = aux;
}
//	algoritimo de soma acumulada
	for(i = num; i <= num2; i++){
		if(i % 2 == 0) total +=  i ;
		
	}
		printf("A soma dos valores pares entre os números %d e %d é de %d",num, num2, total);
}
	


