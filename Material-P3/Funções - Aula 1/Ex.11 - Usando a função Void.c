#include<stdio.h>
#include<math.h>

void classifica_categoria(int i)
{
    if (i>5 && i<7)
    {
        printf("Infantil A");
    }
    else if(i>8 && i<10)
    {
        printf("Infantil B");
    }
    else if (i > 11 && i < 13)
    {
        printf("Juvenil A");
    }
    else if (i>14 && i<17)
    {
        printf("Juvenil B");
    }
    else if (i>=18)
    {
        printf("Adulto");
    }
    else
    {
        printf("Idade invalida");
    }
}

main()
{
    int idade;
    printf("Insira a idade: ");
    scanf("%d",&idade);
    classifica_categoria(idade);
}
