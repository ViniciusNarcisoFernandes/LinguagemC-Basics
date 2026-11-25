#include<stdio.h>
#include<math.h>

main()
{
    float a,b,troca;
    printf("a e b: ");
    scanf("%f %f",&a,&b);

    printf("Valor de a = %f e b = %f \n",a,b);

    troca = a;
    a = b ;
    b = troca;

    printf("Valor depois da troca e; a = %f e b = %f",a,b);
}
