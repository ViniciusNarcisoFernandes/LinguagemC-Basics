#include<stdio.h>
#include<math.h>

void preenche_matrix(int m, int n, int A[m][n])
{
    int i,j;
    printf("Elementos da matrix:\n");
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

void imprime_matrix(int m, int n, int A[m][n])
{
    int i,j;
    printf("A matrix e:\n");
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

void maior_valor(int m, int n, int A[m][n])
{
    int i,j,maior;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i==0 && j==0) || (A[i][j] >  maior))
            {
                maior = A[i][j];
            }
        }
    }
    printf("O maior valor da matrix e: %d \n",maior);
}

void menor_valor(int m, int n, int A[m][n])
{
    int i,j,menor;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i==0 && j ==0) || A[i][j] < menor)
            {
                menor = A[i][j];
            }
        }
    }
    printf("O menor valor da matrix e: %d \n",menor);
}

main()
{
    int m,n;
    printf("Linhas e Colunas: ");
    scanf("%d %d",&m,&n);
    int A[m][n];
    preenche_matrix(m,n,A);
    imprime_matrix(m,n,A);
    maior_valor(m,n,A);
    menor_valor(m,n,A);
}
