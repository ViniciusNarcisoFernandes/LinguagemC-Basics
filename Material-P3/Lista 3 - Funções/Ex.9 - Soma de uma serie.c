#include<stdio.h>

float calcula_soma(int n)
{
    int i, soma = -1;
    for(i=1;i<=n;i++)
    {
        soma = soma + pow(-1,i+1)/(5*(2*i));
    }
    return soma;
}

main()
{
    int n;
    printf("Qtde de termos da serie: ");
    scanf("%d",&n);
    printf("A soma da serie e: %f",calcula_soma(n));
}
