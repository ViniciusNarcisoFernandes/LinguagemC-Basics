#include<stdio.h>

float verifica_maior(int n)
{
    int maior,i;
    float num;
    for(i=0;i<=n;i++)
    {
        printf("Numero para ler: ");
        scanf("%f",&num);
        if (i == 0 || num > maior)
        {
            maior = num;
        }
    }
    return maior;
}

main()
{
    int n;
    float Maior;
    printf("QTde de numeros para ler: ");
    scanf("%d",&n);
    Maior = verifica_maior(n);
    printf("Valor do maior e: %f",Maior);

}
