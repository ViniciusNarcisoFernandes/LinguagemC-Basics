#include<stdio.h>
#include<math.h>

main()
{
    int i,a=1,b=1,c;

    printf("%d %d ", a,b);

    for (i=1;i<=10;i++)
    {
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
    }
}
