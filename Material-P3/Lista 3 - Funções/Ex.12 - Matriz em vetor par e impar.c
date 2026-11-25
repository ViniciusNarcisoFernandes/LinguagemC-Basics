#include<stdio.h>
#include<math.h>

void preenche_matriz(int m, int n, int M[m][n])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("M[%d][%d] = ", i,j);
            scanf("%d",&M[i][j]);
        }
    }
}

void matriz_pares(int m, int n, int M[m][n])
{
    int i,j,p=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(M[i][j]%2==0)
            {
                p = p + 1;
            }
        }
    }

    int v[p],pp=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(M[i][j]%2==0)
            {
                v[pp] = M[i][j];
                pp = pp + 1;
            }
        }
    }

    printf("O vetor de elementos pares e:\n");
    printf("[");
    for(i=0;i<pp;i++)
    {
        printf(" %d ",v[i]);
    }
    printf("]");
    printf("\n");
}

void matriz_impares(int m, int n, int M[m][n])
{
    int i,j,imp=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(M[i][j]%2==1)
            {
                imp = imp + 1;
            }
        }
    }

    int v[imp],impp=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(M[i][j]%2==1)
            {
                v[impp] = M[i][j];
                impp = impp + 1;
            }
        }
    }

    printf("O vetor de elementos impares e:\n");
    printf("[");
    for(i=0;i<impp;i++)
    {
        printf(" %d ",v[i]);
    }
    printf("]");
}

main()
{
    int m,n;
    printf("Linhas e colunas: ");
    scanf("%d %d",&m,&n);
    int M[m][n];
    preenche_matriz(m,n,M);
    matriz_pares(m,n,M);
    matriz_impares(m,n,M);
}
