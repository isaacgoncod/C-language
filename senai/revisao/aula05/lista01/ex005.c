#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i, num2, num1;

    printf("Digíte um número: ");
    scanf("%d", &num1);

    printf("Digíte outro número: ");
    scanf("%d", &num2);

    for(i = num1; i <= num2; i+=2){
        printf("%d\n", i);
    }
}
