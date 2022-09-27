#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i, num;

    printf("Digíte um número inteiro: ");
    scanf("%d", &num);

    for(i = 0; i < num; i++){
        printf("%d\n", i);
    }
}
