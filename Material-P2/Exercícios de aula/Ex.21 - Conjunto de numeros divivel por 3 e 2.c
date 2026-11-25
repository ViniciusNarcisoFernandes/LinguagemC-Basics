#include<math.h>
#include<stdio.h>

main()
{
    int i;
    printf("Valores = ");
    for(i=2;i<=200;i++)
    {
        if (i%2 == 0 && i%3 == 0)
        {
            printf("%d ",i);
        }
    }
}
