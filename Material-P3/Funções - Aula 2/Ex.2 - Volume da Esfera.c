#include<stdio.h>

float calcula_volume(float R, float h)
{
    float volume;

    volume = 3.14*h*pow(R,2);
    return volume;
}

main()
{
    float V,h,R;
    printf("Insira o valor do raio: ");
    scanf("%f",&R);
    printf("Insira o valor da altura: ");
    scanf("%f",&h);

    V = calcula_volume(R,h);
    printf("Volume = %f",V);
}

