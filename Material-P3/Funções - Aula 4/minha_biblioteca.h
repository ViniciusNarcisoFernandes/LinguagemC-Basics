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

void media_variancia(int m, int n, int A[m][n])
{
    int i,j;
    float media,soma1=0,soma2=0,var;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            soma1 = soma1 + A[i][j];
        }
    }
    media = soma1/(m*n);
    printf("Valor da media: %f\n",media);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            soma2 = soma2 + pow((A[i][j] - media),2);
        }
    }

    var = soma2/((m*n)-1);
    printf("A variancia e: %f",var);
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

void vetor_matriz(int m, int n, int A[m][n])
{
    int i,j,v[n];
    for(i=0;i<n;i++)
    {
        v[i] = 1;
        for(j=0;j<m;j++)
        {
            v[i] = v[i] * A[j][i];

        }
    }

    printf("Vetor coluna:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",v[i]);
    }
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






























