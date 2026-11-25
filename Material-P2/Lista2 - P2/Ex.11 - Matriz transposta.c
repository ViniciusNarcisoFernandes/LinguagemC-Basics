#include<stdio.h>
#include<math.h>

main()
{
    int i,j,m,n;
    printf("Linhas e colunas: ");
    scanf("%d %d",&m,&n);
    float M[m][n];

    if ( m != n)
    {
       printf("Nao pode haver a transposicao da matriz.");
    }
    else
    {
        for (i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("M[%d][%d] = ",i,j);
                scanf("%f",&M[i][j]);
            }
        }

        printf("\n");
        printf("Matriz transposta: \n");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                printf("%f ",M[j][i]);
            }
            printf("\n");
        }
    }

}
