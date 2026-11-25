#include<stdio.h>
#include<math.h>

main()
{
    float metro,decimetro,centimetro,milimetro;
    printf("Valor em metro: ");
    scanf("%f",&metro);

    decimetro = metro*10;
    centimetro = metro*100;
    milimetro = metro * 1000;

    printf("Transformação em: decimetro = %f, centimetro = %f , milimetro = %f",decimetro,centimetro,milimetro);
}
