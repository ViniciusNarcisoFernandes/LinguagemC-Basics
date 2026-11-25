#include<stdio.h>
#include<math.h>

void preenche_vetor(int n, int v[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("v[%d] = ",i);
        scanf("%d",&v[i]);
    }
}

void imprime_vetor(int n, int v[n])
{
    int i;
    printf("O vetor e: ");
    printf("[");
    for(i=0;i<n;i++)
    {
        printf(" %d ",v[i]);
    }
    printf("]");
    printf("\n");
}

void pares_impares(int n, int v[n])
{
    int i,par=0,impar=0;
    for(i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            par = par + 1;
        }
        else
        {
            impar = impar + 1;
        }
    }

    printf("A quantidade de pares = %d e impares = %d.",par,impar);
}

main()
{
    int n;
    printf("Numero de valores no vetor: ");
    scanf("%d",&n);
    int v[n];
    preenche_vetor(n,v);
    imprime_vetor(n,v);
    pares_impares(n,v);
}
