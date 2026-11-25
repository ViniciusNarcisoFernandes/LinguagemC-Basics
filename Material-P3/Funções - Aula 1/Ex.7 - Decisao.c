#include<stdio.h>
#include<math.h>

int varifica_dentro_ou_fora(float px, float py , float R)
{
   if (R > px && R > py)
    {
        printf("Os pontos estão fora da circunferencia");
    }
    if else (R == px && R == py)
    {
        printf("Os pontos estao sobre a circunferencia");
    }
    else
    {
        printf("Os pontos estao dentro da circunferencia");
    }
    return ;
}

main()
{
    float px,py,R;
    printf("Coordenadas em px: ")
    scanf("%f",&px);
    printf("Coordenadas em py: ");
    scanf("%f",&py);
    R = sqrt(pow(px,2) + pow(py,2));

    printf(verifica_dentro_ou_fora(px,py,R));
}
