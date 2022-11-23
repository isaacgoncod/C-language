#include<stdio.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[15];
    char sexo;
    int idade;
    int dia;

    printf("Digite seu nome, sexo(M/F), idade e a quantos dias que doou sangue pela ultima vez respectivamente:\n");
    scanf("%s", &nome);
    scanf(" %c", &sexo);
    scanf("%d", &idade);
    scanf("%d", &dia);


    if((sexo == 'm' || sexo == 'M') && (idade >= 18 && idade <= 69) && dia >= 60)
    {
        printf("%s PODE DOAR sangue!!", nome);
    }
    else if((sexo == 'f' || sexo == 'F') && (idade >= 18 && idade <= 69) && dia >= 90)
    {
        printf("%s PODE DOAR sangue!!", nome);
    }
    else
    {
        printf("%s NAO PODE DOAR sangue!!", nome);
    }

}

