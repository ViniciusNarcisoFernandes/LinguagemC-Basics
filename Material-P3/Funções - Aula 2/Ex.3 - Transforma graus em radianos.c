#include<stdio.h>

float transforma_graus(float G)
{
    float R;

    R = (G*3.14)/180;

    return R;

}

main()
{
    float G,resp;
    printf("Valor em graus: ");
    scanf("%f",&G);
    resp = transforma_graus(G);
    printf("Valor em radianos: %f",resp);
}

