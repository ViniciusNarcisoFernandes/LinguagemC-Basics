#include<stdio.h>
#include<math.h>

main()
{
    float a,b,c;
    printf("Lado a, b , c = ");
    scanf("%f %f %f",&a,&b,&c);

    if((a+b>c) && (a+c>b) && (b+c>a))
    {
        printf("Forma-se um triangulo.\n");
        if((a==b) && (b==c))
        {
            printf("Triangulo Equilatero!");
        }
        else if ((a==b) || (a==c) || (b==c))
        {
            printf("Triangulo Isosceles!");
        }
        else
        {
            printf("Triangulo Escaleno!");
        }
    }
    else
    {
        printf("Nao forma um Triangulo!!!");
    }
}
