#include<stdio.h>
#include<math.h>

main()
{
    int i,n;
    printf("Qtde de elementos: ");
    scanf("%d",&n);
    float s = 0;

    for(i=1;i<=n;i++)
    {
        s = s + (-i,i+1)/pow(i,2);
    }

    printf("A soma da serie S = %f",s);
}
