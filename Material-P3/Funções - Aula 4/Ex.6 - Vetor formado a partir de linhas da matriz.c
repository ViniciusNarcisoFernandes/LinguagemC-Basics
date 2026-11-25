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

void vetor_matriz(int m, int n, int A[m][n])
{
    int i,j,v[m];
    for(i=0;i<m;i++)
    {
        v[i] = 0;
        for(j=0;j<n;j++)
        {
            v[i] = v[i] + A[i][j];

        }
    }

    printf("Vetor linha:\n");
    for(i=0;i<m;i++)
    {
        printf(" %d \n",v[i]);
    }
}

main()
{
    int m,n;
    printf("Valor de linhas e colunas: ");
    scanf("%d %d",&m,&n);
    int A[m][n];
    preenche_matriz(m,n,A);
    imprime_matriz(m,n,A);
    vetor_matriz(m,n,A);
}
