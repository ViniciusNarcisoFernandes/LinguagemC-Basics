#include<stdio.h>
#include<math.h>

void preenche_matrix(int m, int n, int M[n][n])
{
    int i,j;
    printf("Colocando os valores na matrix:\n ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("M[%d][%d] = ",i,j);
            scanf("%d",&M[i][j]);
        }
    }
}

void imprime_matrix(int m, int n, int M[n][n])
{
    int i,j;
    printf("A matrix e:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void escalar_matrix(int m, int n, float a, int M[n][n])
{
    int i,j,esc[n][n];
    printf("A matriz escalar e \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            esc[i][j] = a*M[i][j];
            printf(" %d ",esc[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

main()
{
    int m,n;
    printf("Linhas e colunas matriz quadrada: ");
    scanf("%d %d",&m,&n);
    int M[m][n];
    float a;
    printf("Valor do escalar: ");
    scanf("%f",&a);
    preenche_matrix(m,n,M);
    imprime_matrix(m,n,M);
    escalar_matrix(m,n,a,M);
}
