#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL, "Portuguese");  
	
	int i, num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, total = 0;
	
	printf("Dig�te um n�mero : ");
	scanf("%d", &num1);
	printf("Dig�te um n�mero : ");
	scanf("%d", &num2);
	printf("Dig�te um n�mero : ");
	scanf("%d", &num3);
	printf("Dig�te um n�mero : ");
	scanf("%d", &num4);
	printf("Dig�te um n�mero : ");
	scanf("%d", &num5);
	printf("Dig�te um n�mero : ");
	scanf("%d", &num6);
	printf("Dig�te um n�mero : ");
	scanf("%d", &num7);
	printf("Dig�te um n�mero : ");
	scanf("%d", &num8);
	printf("Dig�te um n�mero : ");
	scanf("%d", &num9);
	printf("Dig�te um n�mero : ");
	scanf("%d", &num10);
	printf("Dig�te um n�mero : ");
	scanf("%d", &num11);
	printf("Dig�te um n�mero : ");
	scanf("%d", &num12);
	printf("Dig�te um n�mero : ");
	scanf("%d", &num13);
	printf("Dig�te um n�mero : ");
	scanf("%d", &num14);
	printf("Dig�te um n�mero : ");
	scanf("%d", &num15);
	
	for(i = num1;  i == num2 && i == num3 && i == num4 && i == num5 && i == num6 && i ==num7 && i == num8 && i == num9 && i == num10 && i == num11 && i == num12 && i == num13 && i == num14 && i == num15 ; i++){
		total = total + i ;
	}
		printf("%d", total);
}
