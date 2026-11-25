#include<stdio.h>

float calcula_volume(float R, float h)
{
    float V, pi = 3.1416;
    V = pi*pow(R,2)*h;
    return V;
}

main()
{
    float R,h,volume;
    printf("Raio da lata: ");
    scanf("%f",&R);
    printf("Altura da lata: ");
    scanf("%f",&h);
    volume = calcula_volume(R,h);
    printf("O volume da lata de oleo e: %f",volume);
}
