#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i, num, maior = 0;

    for(i = 0; i < 10; i++){
        printf("Digíte o %d número: ", i + 1);
        scanf("%d", &num);

        if(num > maior){
             maior = num;
        }
    }
    printf("O maior número é: %d", maior);
}
