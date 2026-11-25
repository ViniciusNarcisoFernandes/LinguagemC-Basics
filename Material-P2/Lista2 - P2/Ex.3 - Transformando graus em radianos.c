#include<stdio.h>
#include<math.h>

main()
{
    float G,R,pi=3.141592;
    printf("Valor em graus: ");
    scanf("%f",&G);

    R = G*pi/180;

    printf("Valor do angulo em radianos: %f",R);
}
