#include<stdio.h>
#include<math.h>

int verifica_divisivel(int A, int B)
{
    if (A%B == 0)
    {
        printf("O valor de A = %d por B = %d e divisivel",A,B);
    }
    else
    {
        printf("O valor de A = %d por B = %d nao e divisivel",A,B);
    }

    return ;
}

main()
{
    int A,B;
    printf("Valor de A: ");
    scanf("%d",&A);
    printf("Valor de B: ");
    scanf("%d",&B);

    printf(verifica_divisivel(A,B));
}
