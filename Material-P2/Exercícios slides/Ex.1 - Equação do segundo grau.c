#include<stdio.h>
#include<math.h>

main()
{
    float a,b,c,delta,x1,x2;
    printf("Valor de a, b e c = ");
    scanf("%f %f %f",&a,&b,&c);

    delta = pow(b,2) - 4*a*c;

    x1 = ((-b)+sqrt(delta))/(2*a);
    x2 = ((-b)-sqrt(delta))/(2*a);

    printf("x1 = %f e x2 = %f.",x1,x2);
}
