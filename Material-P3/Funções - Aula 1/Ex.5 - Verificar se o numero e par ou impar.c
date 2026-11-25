#include<stdio.h>
#include<math.h>

int par_ou_impar(int A)
{
    if (A > 0 )
    {
        if (A%2 == 0)
        {
            printf("Valor e par");
        }
        else
        {
            printf("Valor e impar");
        }
    }

    else
    {
        printf("O valor digitado e negativo!!!");
    }

    return 0 ;
}

main()
{
    int A;
    printf("Valor para verificar se e par ou impar: ");
    scanf("%d",&A);
    printf(par_ou_impar(A));
}
