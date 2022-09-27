#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i, soma = 0;

    for(i = 0; i <= 100; i++){
        soma = soma + i;
    }
    printf("Soma entre 0 e 100: %d", soma);
}
