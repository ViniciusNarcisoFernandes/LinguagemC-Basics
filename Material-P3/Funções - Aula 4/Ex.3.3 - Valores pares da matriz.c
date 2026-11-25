#include<stdio.h>
#include<math.h>

void preenche_matriz(int m, int n, int A[m][n])
{
    int i,j;
    printf("Preenchendo a matriz \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
}

void imprime_matriz(int m, int n, int A[m][n])
{
    int i,j;
    printf("A matriz e \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void pares_matrix(int m,int n, int A[m][n])
{
    int i,j,par = 0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i][j]%2==0)
            {
                par = par + 1;
            }
        }
    }
    printf("A qtde de valores pares na matriz e: %d",par);
}

main()
{
    int m,n;
    printf("Valor de linhas e colunas: ");
    scanf("%d %d",&m,&n);
    int A[m][n];
    preenche_matriz(m,n,A);
    imprime_matriz(m,n,A);
    pares_matrix(m,n,A);
}
