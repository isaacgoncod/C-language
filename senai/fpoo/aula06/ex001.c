#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int numsa [5], numsb [5], i, soma = 0;
	
	for(i = 0; i < 5; i++){
	printf("Digíte o qualquer número : ");
	scanf("%d", &numsa[i]);
	}
	
	printf("--------------------------------------------------\n");
	
	for(i = 0; i < 5; i++){
	printf("Digíte o segundo número : ");
	scanf("%d", &numsb[i]);
	}
	printf("--------------------------------------------------\n\n");
	printf("%d\n", numsa[0] + numsb[4]);
	printf("%d\n", numsa[1] + numsb[3]);
	printf("%d\n", numsa[2] + numsb[2]);
	printf("%d\n", numsa[3] + numsb[1]);
	printf("%d\n", numsa[4] + numsb[0]);
	
}
