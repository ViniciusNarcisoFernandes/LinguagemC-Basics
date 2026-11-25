#include<stdio.h>
#include<math.h>

main()
{
    int i,j,m,n,e;
    printf("Linhas e colunas: ");
    scanf("%d %d",&m,&n);
    printf("Valor do escalar: ");
    scanf("%d",&e);
    int A[m][n],B[m][n];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);

            B[i][j] = e*A[i][j];
        }
    }

    printf("Matriz A \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }

    printf("\n");
    printf("Matriz B \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
}
