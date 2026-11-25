#include<stdio.h>
#include<math.h>

float soma(float a, float b)
{
    float s;
    s = a + b;
    return s;
}

float produto(float a, float b)
{
    float p;
    p = a*b;
    return p;
}

float quadrado(float a)
{
    float quad;
    quad = pow(a,2);
    return quad;
}

float raiz_quadrada(float a , float b)
{
    float sq;
    sq = sqrt(a + b);
    return sq;
}

main()
{
    float a,b;
    printf("Valor de a: ");
    scanf("%f",&a);
    printf("Valor de b: ");
    scanf("%f",&b);

    printf("Valor de soma de a + b = %f \n",soma(a,b));
    printf("Valor do produto de a x b = %f \n",produto(a,b));
    printf("Quadrado de a = %f \n",quadrado(a));
    printf("Raiz quadrada da soma = %f \n",raiz_quadrada(a,b));
}
