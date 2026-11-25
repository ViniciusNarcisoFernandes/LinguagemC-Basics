#include<stdio.h>
#include<math.h>

main()
{
    int i,j,m,n, soma,aux = 0;
    printf("Linhas e Colunas: ");
    scanf("%d %d",&m,&n);
    int A[m][n],vl[m];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        soma = 0;
        for(j=0;j<n;j++)
        {
            vl[aux] = soma + A[i][j];
            aux = aux + 1;
        }
    }

    printf("Vetor linha = ");
    for(i=0;i<aux;i++)
    {
        printf("%d ",vl[i]);
    }
}
