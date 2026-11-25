#include<stdio.h>
#include<math.h>

void converte(float m)
{
    float dec,cent,mili;

    dec = m*10;
    cent = m*100;
    mili = m*1000;

    printf("Decimetros: %f, Centimetros: %f e Milimetros: %f",dec,cent,mili);
}

main()
{
    float m;
    printf("Valor em metros: ");
    scanf("%f",&m);

    converte(m);
}
