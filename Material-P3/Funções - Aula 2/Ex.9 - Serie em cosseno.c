#include<stdio.h>
#include<math.h>

int fatorial (int N)
{
    int i,f=1;
    for(i=1;i<=N;i++)
    {
        f = f*1;
    }
    return f;
}

float cosseno(float x)
{
    int k;
    float cos = 0;
    for(k=0;k<=5;k++)
    {
        cos = cos + (pow(-1,k)*pow(x,2*k))/fatorial(2*k);
    }
    return cos;
}

main()
{
    float x = 360;
    x = 3.14* x/180;
    printf("Cosseno = %f\n",cosseno(x));
    printf("Cos = %f\n",cos(x));
}



















