#include<stdio.h>
#include<math.h>

void preenche_matrix(int n, int M[n][n])
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

void imprime_matrix(int n, int M[n][n])
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

void escalar_matrix(int n, float a, int M[n][n])
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

void potencia_matrix(int n, int M[n][n])
{
    int i,j,pot[n][n];
    printf("A matriz potencia e: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            pot[i][j] = pow(M[i][j],3);
            printf(" %d ",pot[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


main()
{
    int n;
    printf("Linhas e colunas da matriz quadrada: ");
    scanf("%d",&n);
    int M[n][n];
    float a;
    printf("Valor do escalar: ");
    scanf("%f",&a);
    preenche_matrix(n,M);
    imprime_matrix(n,M);
    escalar_matrix(n,a,M);
    potencia_matrix(n,M);
}
