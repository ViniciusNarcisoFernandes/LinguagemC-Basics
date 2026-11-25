#include<stdio.h>
#include<math.h>

main()

{
    float V,R,h,pi=3.14;
    printf("Raio: ");
    scanf("%f",&R);
    printf("Altura: ");
    scanf("%f",&h);

    V = pi*(R*R)*h;

    printf("Volume da lata: %f",V);
}
