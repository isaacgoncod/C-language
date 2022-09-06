#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 1;

    while(i <= 10){
        printf("%d\n", i);
        i++;

    }

}
