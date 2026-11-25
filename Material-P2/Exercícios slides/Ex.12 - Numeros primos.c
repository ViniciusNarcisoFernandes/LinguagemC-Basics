#include<stdio.h>
#include<math.h>

main()
{
    int i,n,con = 0;

    printf("Valor do numero analisado: ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if (n%i == 0)
        {
            con = con + 1;
        }
    }

    if (con == 1)
    {
        printf("Numero %d e primo",n);
    }
    else
    {
        printf("Numero %d nao e primo",n);
    }
}
