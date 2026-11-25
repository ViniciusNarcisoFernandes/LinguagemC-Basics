#include<stdio.h>
#include<math.h>

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
    int n,k,A;
    printf("Insira os valores de n e k: ");
    scanf("%d %d",&n,&k);

    A = fatorial(n)/fatorial(n-k);
    printf("A = %d",A);
}

