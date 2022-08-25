
#include <stdio.h>
#include <locale.h>
int main(){
	//Configurações e variáveis
	setlocale(LC_ALL,"");
	
	int nums[6], i, j , aux;
	
	for(i = 0; i < 6; i++){
		
		printf("Digíte o %dº valor : ", i + 1);
		scanf("%d", &nums[i]);	
		j = i;
			if (nums[i] > nums[j]){
				 aux = nums[i];
				nums[i] = nums[j];
				nums[j] = aux;
			}
		j++;
	}
//		for(j = 0 ; j < 6; j++){
//	
//	for(i = 0; i < 6; i++ ){
//			}
//		}
//	}
		
	
	for(i = 0; i < 6; i++){
		printf("{%d}", nums[i]);
	}

}
