#include<stdio.h>
#include<math.h>

main()
{
    float C,F;
    int i;
    for (i=1;i<4;i++)
    {
        printf("Valor da temperatura em Fahrenheit: ");
        scanf("%f",&F);
        C = (5*(F-32))/9;
        printf("Temperatura em Fahrenheit: %f F \n",C);
    }
}

