#include<stdio.h>
#include<math.h>

main()
{
    int i,n;
    float H = 0;
    printf("Qtde de termos: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        H = H + pow(-1,(i-1))/(pow(i,3));
    }

    printf("Valor da soma: %f",H);
}
