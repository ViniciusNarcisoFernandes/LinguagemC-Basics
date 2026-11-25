#include<stdio.h>
#include<math.h>

main()
{
    int p;
    printf("Produto: ");
    scanf("%d",&p);

    if (p==1)
    {
        printf("Alimento nao perecivel");
    }
    else if (p==2 || p==3 || p==4)
    {
        printf("Alimento perecivel");
    }
    else if (p==5 || p==6)
    {
        printf("Vestuario");
    }
    else if (p==7)
    {
        printf("Higiene Pessoal");
    }
    else if (p>=8 && p<=15)
    {
        printf("Limpeza e utensilios domesticos");
    }
    else
    {
        printf("Invalido");
    }
}
