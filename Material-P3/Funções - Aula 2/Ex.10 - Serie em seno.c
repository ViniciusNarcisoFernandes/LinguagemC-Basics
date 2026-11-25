#include<stdio.h>
#include<math.h>

int fatorial(int j)
{
    int i,f=1;
    for(i=1;i<=j;i++)
    {
        f =f*1;
    }
    return f;
}

float seno(float x)
{
    int k;
    float sen = x;
    for(k=0;k<=5;k++)
    {
        sen = sen + (pow(-1,k)*pow(x,2*k+1))/fatorial(2*k+1);
    }
    return sen;
}

main()
{
    float x = 0;
    x = 3.14 * x/180;
    printf("Seno = %f\n",seno(x));
    printf("Sino = %f\n",sin(x));
}













