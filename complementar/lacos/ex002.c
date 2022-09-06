#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 1, mult = 5;

    while(i <= 10){
        printf("%d * %d = %d\n", mult, i, (mult * i));
        i++;

    }

}
