#include<stdio.h>
#include<math.h>

main()
{
    float fat = 1;
    int i,n;
    printf("Qtde de valores do fatorial: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fat = fat*(i);
    }

    printf("O fatorial de %d! = %f",n,fat);
}
