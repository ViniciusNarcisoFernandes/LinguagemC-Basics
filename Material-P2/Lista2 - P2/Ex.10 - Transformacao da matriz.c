#include<stdio.h>
#include<math.h>

main()
{
    int i,j,m,n;
    printf("Linhas e colunas: ");
    scanf("%d %d",&m,&n);
    int M[m][n],v[m*n],con = 0;

    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("M[%d][%d] = ",i,j);
            scanf("%d",&M[i][j]);
        }
    }

    for (j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            v[con] = M[i][j];
            con = con + 1;
        }
    }

    printf("vetor coluna = ");
    for(i=0;i<con;i++)
    {
        printf("%d ",v[i]);
    }
}
