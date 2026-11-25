#include<stdio.h>
#include<math.h>

main()
{
    int i,j,m,n;
    printf("Linhas e Colunas: ");
    scanf("%d %d",&m,&n);
    int A[m][n],v[m*n],c = 0;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            v[c] = A[j][i];
            c = c + 1;
        }
    }

    printf("Vetor = ");
    for(i=0;i<m*n;i++)
    {
        printf("%d ",v[i]);
    }

}
