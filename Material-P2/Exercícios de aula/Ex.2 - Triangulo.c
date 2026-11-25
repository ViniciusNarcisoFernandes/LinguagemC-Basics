#include<stdio.h>
#include<math.h>

main()
{
    int a,b,c;
    printf("Lado: a, b e c: ");
    scanf("%f %f %f",&a,&b,&c);
    if((a < b + c) && (b < a + c) && (c < a + b))
    {
        if((a == b) && (b == c))
        {
            printf("Triangulo Equilatero");
        }
        else if ((a == b) || (a == c) || (b == c))
        {
            printf("Triangulo Isosceles");
        }
        else
        {
            printf("Triangulo Escaleno");
        }
    }
    else
    {
        printf("Nao existe triangulo!!!");
    }
}
