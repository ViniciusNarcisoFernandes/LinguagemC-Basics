#include<stdio.h>
#include<math.h>

main()
{
    float V,R,pi=3.14;

    printf("Raio da esfera: ");
    scanf("%f",&R);

    V = (4*pi*pow(R,3))/3;

    printf("Volume da esfera e: %f",V);
}
