#include<stdio.h>

float serie_H(int n)
{
    float H = 0;
    int i;
    for(i=1;i<=n;i++)
    {
        H = H + pow(-1,i+1)/pow(i,3);
    }
    return H;
}

main()
{
    int n;
    float serie;
    printf("Numero de termos da serie: ");
    scanf("%d",&n);
    serie = serie_H(n);
    printf("A somatoria da serie e: %f",serie);
}
