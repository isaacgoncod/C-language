#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i, soma = 0, num;


    for(i = 0; i < 15; i++){
        printf("Digíte o %d° número: ", i + 1);
        scanf("%d", &num);
        soma = soma + num;
    }
    printf("Soma dos valores digítados é: %d", soma);
}
