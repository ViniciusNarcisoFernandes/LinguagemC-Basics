#include<stdio.h>
#include<math.h>

main()
{
    float i,n,pi=0;
    printf("Qtde de termos: ");
    scanf("%f",&n);

    for (i=0;i<n;i++)
    {
        pi = pi + (4*pow(-1,i))/(2*i+1);
    }
    printf("Valor de pi = %f",pi);
}
