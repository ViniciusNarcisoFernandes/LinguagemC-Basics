#include<stdio.h>
#include<math.h>

void preencheA(int n, int A[n][n])
{
    int i,j;
    printf("Matrix A:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
}

void preencheB(int n, int B[n][n])
{
    int i,j;
    printf("Matrix B:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
}

void somaAB(int n,int A[n][n],int B[n][n])
{
    int i,j,C[n][n];
    printf("Matrix C:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf(" %d ",C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

main()
{
    int n;
    printf("Linhas e colunas da matrix quadrada: ");
    scanf("%d",&n);
    int A[n][n],B[n][n];
    preencheA(n,A);
    preencheB(n,B);
    somaAB(n,A,B);
}
