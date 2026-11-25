#include<stdio.h>
#include<math.h>

main()
{
    int i,j,m,n;
    printf("linhas e colunas = ");
    scanf("%d %d",&m,&n);
    int A[m][n],vl[m],aux = 0,soma;

    printf("Valores da matriz = \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        soma = 0;
        for(j=0;j<n;j++)
        {
            soma = soma + A[i][j];
        }
        vl[aux] = soma;
        aux = aux + 1;
    }

    printf("Vetor linha = ");
    for(i=0;i<aux;i++)
    {
        printf("%d ",vl[i]);
    }
}
