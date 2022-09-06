#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 1, mult;

    printf("Digíte um número inteiro : ");
    scanf("%d", &mult);

    while(i <= 10){
        printf("%d x %d = %d\n",mult, i, (mult * i));
        i++;
    }

}
