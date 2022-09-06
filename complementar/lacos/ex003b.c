#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i, mult = 1;

    while(mult <= 5){
        i = 1;
        while(i <= 10){
            printf("%d x %d = %d\n",mult, i, (mult * i));
            i++;
        }
        printf("---------------------------------\n ");
        mult++;
    }

}

