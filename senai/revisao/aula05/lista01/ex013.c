#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int i, j, aux = 0, num[5];

    for(i = 0; i < 5; i++){
        printf("Digíte o %d número: ", i + 1);
        scanf("%d", &num[i]);
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(num[i] < num[j]){
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }
    for(i = 0; i < 5; i++){
        printf("%d\n", num[i]);
    }
}
