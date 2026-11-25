#include<stdio.h>
#include<math.h>

void raizes_equacao(float a, float b, float c)
{
    float delta;
    delta = pow(b,2) - 4*a*c;
    if(delta > 0)
    {
        printf("Duas raizes reais distintas");
    }
    else if(delta == 0)
    {
        printf("Duas raizes reais iguais");
    }
    else
    {
        printf("Nao existe reízes reais");
    }
}

main()
{
    float a,b,c;
    printf("Valor de a, b e c: ");
    scanf("%f %f %f",&a,&b,&c);
    raizes_equacao(a,b,c);
}
