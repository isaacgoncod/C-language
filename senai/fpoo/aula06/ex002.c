#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int nums [10], i, somaPar = 0  , somaImpar = 0 , mediaPar = 0, mediaImpar = 0 , contPar = 0  , contImpar = 0;
	
	for(i = 0; i < 10; i++ ){
		printf("Digite os valores ímpares ou pares : ", i);
		scanf("%d", &nums[i]);
	}
	for(i = 0; i < 10; i++ ){
		if(nums[i] % 2 == 0){
			somaPar += nums[i] ;
			contPar++;
		}else{
			somaImpar += nums[i];
			contImpar++;
		}		
	}	
			printf("A soma e média dos valores Impares declarados é de %d e %d\n", somaImpar, (somaImpar / contImpar));
			printf("O total de números Impares é de %d\n",contImpar );
			printf("A soma e média dos valores Pares declarados é de %d e %d\n", somaPar, (somaPar / contPar));
			printf("O total de números Pares é de %d\n", contPar );
	
	
	
}
