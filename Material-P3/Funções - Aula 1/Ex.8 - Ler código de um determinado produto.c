#include<stdio.h>
#include<math.h>

int codigo(int c)
{
    if (c == 1)
    {
        printf("Alimento nao perecivel");
    }
    else if ( c == 2 || c == 3 || c == 4)
    {
        printf("Alimento perecivel");
    }
    else if ( c == 5 || c == 6)
    {
        print("Vestuario");
    }
    else if ( c >= 8 && c <=15)
    {
        printf("Limpeza e utensilios domesticos");
    }
    else
    {
        printf("Codigo Invalido");
    }

    return ;
}

main()
{
    int c;
    printf("Digite o valor do codigo: ");
    scanf("%d",&c);

    printf(codigo(c));
}
