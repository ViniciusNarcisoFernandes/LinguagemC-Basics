#include<stdio.h>
#include<math.h>

float area_do_trapezio(float h, float B, float b)
{
    float A;
    if (B > 0 && b > 0)
    {
        A = ((B+b)*h)/2;
    }
    else
    {
        printf("Nao se pode formar trapezio!!!");
    }
    return A;
}

main()
{
    float h,B,b;
    printf("Altura: ");
    scanf("%f",&h);
    printf("Base maior: ");
    scanf("%f",&B);
    printf("Base menor: ");
    scanf("%f",&b);
    printf("A area do tapezio e: %f",area_do_trapezio(h,B,b));
}
