#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i, num;

    printf("Digíte um número para a tabuada: ");
    scanf("%d", &num);

    for(i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", num, i, num * i);

    }
}
