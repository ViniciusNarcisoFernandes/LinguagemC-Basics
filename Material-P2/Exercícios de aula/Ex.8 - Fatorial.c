#include<stdio.h>
#include<math.h>

main()
{
    int i,n,fat=1;
    printf("Numero do Fatorial: ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        fat = fat*i;
    }
    printf("O valor do fatorial e: %d",fat);
}
