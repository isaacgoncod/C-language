#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, nums[6];
	
	for(i = 1; i < 7; i++){
		printf("Digíte o %dº valor : ", i);
		scanf("%d", &nums[i]);
	}
	for(i = 5; i >= 0; i--) printf("{%d}\n",nums[i]);
	
		
	
	
}

