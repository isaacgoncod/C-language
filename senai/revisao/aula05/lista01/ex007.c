#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i, soma = 0, num1, num2;

    printf("Digíte um número: ");
    scanf("%d", &num1);

    printf("Digíte outro número: ");
    scanf("%d", &num2);

    for(i = num1; i <= num2; i++){
        soma = soma + i;
    }
    printf("Soma entre %d e %d: %d", num1, num2, soma);
}
