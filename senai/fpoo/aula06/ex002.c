#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int nums [10], i, somaPar = 0  , somaImpar = 0 , mediaPar = 0, mediaImpar = 0 , contPar = 0  , contImpar = 0;
	
	for(i = 0; i < 10; i++ ){
		printf("Digite os valores �mpares ou pares : ", i);
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
			printf("A soma e m�dia dos valores Impares declarados � de %d e %d\n", somaImpar, (somaImpar / contImpar));
			printf("O total de n�meros Impares � de %d\n",contImpar );
			printf("A soma e m�dia dos valores Pares declarados � de %d e %d\n", somaPar, (somaPar / contPar));
			printf("O total de n�meros Pares � de %d\n", contPar );
	
	
	
}
