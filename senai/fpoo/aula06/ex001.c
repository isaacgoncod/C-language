#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int numsa [5], numsb [5], i;
	
	for(i = 0; i < 5; i++){
	printf("Digíte o %dº valor do primeiro vetor : ", i + 1);
	scanf("%d", &numsa[i]);
	}
	
	printf("--------------------------------------------------\n");
	
	for(i = 0; i < 5; i++){
	printf("Digíte o %dº valor do segundo vetor : ", i + 1);
	scanf("%d", &numsb[i]);
	}
	printf("--------------------------------------------------\n\n");
	printf("A soma de %d com %d é de : %d\n",numsa[0], numsb[4], numsa[0] + numsb[4]);
	printf("A soma de %d com %d é de : %d\n",numsa[1], numsb[3], numsa[1] + numsb[3]);
	printf("A soma de %d com %d é de : %d\n",numsa[2], numsb[2], numsa[2] + numsb[2]);
	printf("A soma de %d com %d é de : %d\n",numsa[3], numsb[1], numsa[3] + numsb[1]);
	printf("A soma de %d com %d é de : %d\n",numsa[4], numsb[0], numsa[4] + numsb[0]);
	
}
