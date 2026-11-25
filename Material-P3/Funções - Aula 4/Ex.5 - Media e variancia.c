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

main()
{
    int m,n;
    printf("Valor de linhas e colunas: ");
    scanf("%d %d",&m,&n);
    int A[m][n];
    preenche_matriz(m,n,A);
    imprime_matriz(m,n,A);
    media_variancia(m,n,A);
}
