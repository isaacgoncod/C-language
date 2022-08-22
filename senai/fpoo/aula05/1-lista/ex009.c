#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");

	int i, num , total = 0;
	
	for(i = 0; i < 15; i++){
		num = -1;
		while(num < 1 || num > 34567){
			printf("Digíte %dº número : ", i + 1);
			scanf("%d", &num);
}
		total += num;
	}
		printf("%d", total);
}
	


