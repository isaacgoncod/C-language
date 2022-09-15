#include <stdio.h>

void main()
{
    int x, y, aux;

    printf("Digíte 2 números inteiros: ");
    scanf("%d %d", &x, &y);

    if(x > y)
    {

        aux = x;
        x = y;
        y = aux;
    }
    printf("%d %d\n", x, y);

}
