
#include <stdio.h>
#include <locale.h>
int main(){
	//Configura??es e vari?veis
	setlocale(LC_ALL,"");
	
	int nums[6], i, j , aux;
	
	for(i = 0; i < 6; i++){
		
		printf("Dig?te o %d? valor : ", i + 1);
		scanf("%d", &nums[i]);	
	}
	
	for(i = 0; i < 6; i++ ){
		for(j = 0 ; j < 6; j++){
			if (nums[i] > nums[j]){
				 aux = nums[i];
				nums[i] = nums[j];
				nums[j] = aux;
			}
		}
	}
		
	
	for(j = 0; j < 6; j++){
		printf("{%d}", nums[j]);
	}

}
