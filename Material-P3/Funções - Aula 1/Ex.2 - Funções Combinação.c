#include<stdio.h>
#include<math.h>

int kvalor(int k)
{
    int j,kfat=1;
    for(j=2;j<=k;j++)
    {
        kfat = kfat*j;
    }

    return kfat;
}

int fatorial(int n)
{
    int i,fat=1;
    for(i=2;i<=n;i++)
    {
        fat = fat*i;
    }

    return fat;
}

main()
{
    int C,n,k;
    printf("Valores de n e k: ");
    scanf("%d %d",&n,&k);

    C = fatorial(n)/(fatorial(n-k)*kvalor(k));

    printf("Combinacao[C] = %d",C);
}
