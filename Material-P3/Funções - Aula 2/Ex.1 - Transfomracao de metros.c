#include<stdio.h>

float transforma_dec(float metro)
{
    float dec;
    dec = metro*10;
    return dec;
}

float transforma_cent(float metro)
{
    float cent;
    cent = metro*100;
    return cent;
}

float transforma_milim(float metro)
{
    float milim;
    milim = metro*1000;
    return milim;
}

main()
{
    float metro,res1,res2,res3;
    printf("Valor em metro: ");
    scanf("%f",&metro);
    res1 = transforma_dec(metro);
    res2 = transforma_cent(metro);
    res3 = transforma_milim(metro);
    printf("decimetro: %f, centimetro: %f, milimetro: %f",res1,res2,res3);
}

