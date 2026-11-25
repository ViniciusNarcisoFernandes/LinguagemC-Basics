#include<stdio.h>

float pi_para_radianos(float G)
{
    float R,pi=3.14;
    R = G*(pi/180);
    return R;
}

main()
{
    float G;
    printf("Digite o valor em graus: ");
    scanf("%f",&G);
    printf("Valor em radianos e: %f",pi_para_radianos(G));
}
