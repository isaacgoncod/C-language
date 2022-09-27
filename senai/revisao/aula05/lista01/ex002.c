#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i;

    for(i = 200; i > 0; i--){
        printf("%d\n", i);
    }
}
