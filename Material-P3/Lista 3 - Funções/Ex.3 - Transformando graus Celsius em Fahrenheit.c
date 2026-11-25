#include<stdio.h>
#include<math.h>

float celsius_para_fahrenheit(float celsius)
{
    float F;
    F = celsius*(9.0/5.0) + 32;
    return F;
}

main()
{
    float celsius,fah;
    printf("Valor da temperatura em graus celsius:\n");
    scanf("%f",&celsius);
    fah = celsius_para_fahrenheit(celsius);
    printf("Transformando de graus celsius para fahrenheit e = %f",fah);
}
