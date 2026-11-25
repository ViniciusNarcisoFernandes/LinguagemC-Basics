#include<stdio.h>
#include<math.h>

main()
{
    float d,x1,x2,y1,y2;

    printf("Valor de x1 e x2: ");
    scanf("%f %f",&x1,&x2);
    printf("Valor de y1 e y2: ");
    scanf("%f %f",&y1,&y2);

    d = sqrt(pow((x1-x2),2) + pow((y1-y2),2));

    printf("A distancia e: %f",d);
}
