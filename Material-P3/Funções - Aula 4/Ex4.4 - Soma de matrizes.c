#include<stdio.h>
#include<math.h>

void preencheA(int m, int n, int M1[m][n])
{
    int i,j;
    printf("Matrix M1:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("M1[%d][%d] = ",i,j);
            scanf("%d",&M1[i][j]);
        }
    }
}

void preencheB(int m, int n, int M2[m][n])
{
    int i,j;
    printf("Matrix M2:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("M2[%d][%d] = ",i,j);
            scanf("%d",&M2[i][j]);
        }
    }
}

void soma_matrizes(int m,int n,int M1[m][n],int M2[m][n])
{
    int i,j,Soma[m][n];
    printf("Matrix Soma:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            Soma[i][j] = M1[i][j] + M2[i][j];
            printf(" %d ",Soma[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

main()
{
    int m,n;
    printf("Linhas e colunas da matriz: ");
    scanf("%d %d",&m,&n);
    int M1[m][n],M2[m][n];
    preencheA(m,n,M1);
    preencheB(m,n,M2);
    soma_matrizes(m,n,M1,M2);
}
