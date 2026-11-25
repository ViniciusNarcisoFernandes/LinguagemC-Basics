#include<stdio.h>
#include<math.h>

void preenche_matriz(int m, int A[m][m])
{
    int i,j;
    printf("Preenchendo a matriz \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
}

void imprime_matriz(int m, int A[m][m])
{
    int i,j;
    printf("A matriz e \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf(" %d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void vetor_diagonal(int m, int A[m][m])
{
    int i,j,vet_diag[m],vet_sec[m];
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                vet_diag[i] = A[i][j];
            }
        }
    }
    printf("Vetor da diagonal principal:\n");
    for(i=0;i<m;i++)
    {
        printf(" %d ",vet_diag[i]);
    }
    printf("\n");
    printf("Descobrindo valores da diagonal secundaria:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i+j==m-1)
            {
                vet_sec[i] = A[i][j];
            }
        }
    }
    for(i=0;i<m;i++)
    {
        printf(" %d ",vet_sec[i]);
    }
}

main()
{
    int m;
    printf("Valor de linhas e colunas: ");
    scanf("%d",&m);
    int A[m][m];
    preenche_matriz(m,A);
    imprime_matriz(m,A);
    vetor_diagonal(m,A);
}
