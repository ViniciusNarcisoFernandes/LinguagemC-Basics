#include<stdio.h>
#include<math.h>

float ABS(float x)
{
    if (x < 0)
    {
        x = x*(-1);
    }
    else
    {
        x = x;
    }
    return x;
}

main()
{
    float x,resposta;
    printf("Insira o valor de x: ");
    scanf("%f",&x);
    resposta= ABS(x);
    printf("O modulo do numero e: %f",resposta);
}
