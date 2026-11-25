#include<stdio.h>
#include<math.h>

main()
{
    float a,b,c,delta,x1,x2;

    printf("Valor a: ");
    scanf("%f",&a);
    printf("Valor b: ");
    scanf("%f",&b);
    printf("Valor c: ");
    scanf("%f",&c);

    delta = powf(b,2) - 4*a*c;

    x1 = ((-b) + sqrt(delta))/(2*a);
    x2 = ((-b) - sqrt(delta))/(2*a);

    if (delta > 0)
    {
        printf("Raizes diferentes. X1 = %f e X2 = %f.",x1,x2);
    }
    else if (delta == 0)
    {
        printf("Raizes iguais. X = %f.",x1);
    }
    else
    {
        printf("Nao existe raizes reais.");
    }
}
