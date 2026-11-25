#include<stdio.h>
#include<math.h>

float graus_para_radianos(int n)
{
    float rad, pi=3.1416;

    rad = (n*pi)/180;

    return rad;
}

main()
{
    float R;
    int n;
    printf("Valor em graus: ");
    scanf("%d",&n);

    R = graus_para_radianos(n);

    printf("Em radianos e %f",R);

}
