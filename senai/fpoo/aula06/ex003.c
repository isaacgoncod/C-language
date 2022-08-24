#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, nums[6];
	
	for(i = 0; i < 6; i++){
		printf("Digíte os valores : ");
		scanf("%d", &nums[i]);
	}
	for(i = 5; i >= 0; i--){
		printf("{%d}\n",nums[i]);
		
	}
	
}

