#include<stdio.h>

void produto(int prod)
{
    if (prod == 1)
    {
        printf("Alimento nao perecivel");
    }
    else if (prod == 2 || prod == 3 || prod == 4)
    {
        printf("Alimento perecivel");
    }
    else if (prod == 5 || prod == 6)
    {
        printf("Vestuario");
    }
    else if (prod == 7)
    {
        printf("Higiene Pessoal");
    }
    else if (prod >= 8 && prod <= 15)
    {
        printf("Limpeza e utensilios domesticos");
    }
    else
    {
        printf("Inv�lido");
    }
}

main()
{
    int prod;
    printf("Produto: ");
    scanf("%d",&prod);
    produto(prod);
}
