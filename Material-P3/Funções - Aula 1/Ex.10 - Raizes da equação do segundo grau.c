#include<stdio.h>
#include<math.h>

void verifica_raiz(float a, float b, float c)
{
    float delta, x1, x2;

    delta = pow(b,2)-4*a*c;
    x1 = ((-b) + sqrt(delta))/(2*a);
    x2 = ((-b) - sqrt(delta))/(2*a);

    if (delta > 0)
    {
        printf("Possui duas raizes reais com valores x1 = %f e x2 = %f",x1,x2);
    }
    else if (delta == 0)
    {
        printf("Possui duas raizes reais e iguais com valores de x = %f",x1);
    }
    else
    {
        printf("Possui raizes complexas");
    }

    return ;
}

main()
{
    float a,b,c;
    printf("Valor de a: ");
    scanf("%f",&a);
    printf("Valor de b: ");
    scanf("%f",&b);
    printf("Valor de c: ");
    scanf("%f",&c);
    verifica_raiz(a,b,c);

}
