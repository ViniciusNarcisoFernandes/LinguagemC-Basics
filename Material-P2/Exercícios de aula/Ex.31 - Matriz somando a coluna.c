#include<stdio.h>
#include<math.h>

main()
{
    int i,j,m,n;
    printf("linhas e colunas = ");
    scanf("%d %d",&m,&n);
    int A[m][n],vc[n],aux=0,soma;

    printf("Valores da matriz = \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    for(j=0;j<n;j++)
    {
        soma = 0;
        for(i=0;i<m;i++)
        {
            soma = soma + A[i][j];
        }
        vc[aux] = soma;
        aux = aux + 1;
    }

    printf("\n");
    printf("Vetor coluna = ");
    for(i=0;i<aux;i++)
    {
        printf("%d ",vc[i]);
    }
}
