#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int nums [10], i, somaPar = 0  , somaImpar = 0 , mediaPar = 0, mediaImpar = 0 , contPar = 0  , contImpar = 0;
	
	printf("Digíte 10 números inteiros entre 0 e 1000\n");
	
	for(i = 0; i < 10; i++){
		do{
			printf("%dº :", i + 1);
			scanf("%d", &nums[i]);
			
		}while(nums[i] < 0 || nums[i] > 1000);
	}
	
	for(i = 0; i < 10; i++){
		if(nums[i] % 2 == 0){
			somaPar += nums[i];
			contPar++;
		}else{
			somaImpar += nums[i];
			contImpar++;
		}
	}
	
		if(contPar != 0) mediaPar = (somaPar / contPar);
		if(contImpar != 0) mediaImpar = (somaImpar / contImpar);
			
		printf("A soma e média dos valores Pares declarados é de %d e %d\n", somaPar, mediaPar);
		printf("O total de números Pares é de %d\n", contPar );
		printf("A soma e média dos valores Impares declarados é de %d e %d\n", somaImpar, mediaImpar);
		printf("O total de números Impares é de %d\n",contImpar );
	
}
