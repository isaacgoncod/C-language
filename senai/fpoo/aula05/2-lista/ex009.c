#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL, "Portuguese");
		
		int val;
		int nums [val], i;
		
		printf("Digite quantos valores voce quer guardar no vetor : ");
		scanf("%d", &val);
		
		for (i = 0; i < val; i++){
			printf("Digíte : ");
			scanf("%d", &nums[i]);	
			
		}for(i = 0; i < val; i++){
			printf("{ %d }", nums[i]);
		}
		
		
//		
//			while(i < 3){
//			printf("Digíte : ");
//			scanf("%d", &nums[i]);
//			i++;
//		}
//		
//		
//		printf("{ %d }", nums[0]);
//		printf("{ %d }", nums[1]);
//		printf("{ %d }", nums[2]);
		
	
		
		
		
		
}
