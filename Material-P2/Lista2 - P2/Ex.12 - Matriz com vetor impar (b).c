#include<stdio.h>
#include<math.h>

main()
{
    int i,j,m,n,c = 0,ci = 0;
    printf("Linhas e colunas: ");
    scanf("%d %d",&m,&n);
    int A[m][n];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
            if(A[i][j]%2 == 1)
            {
                c = c + 1;
            }
        }
    }

    int vi[c];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i][j]%2 == 1)
            {
                vi[ci] = A[i][j];
                ci = ci + 1;
            }
        }
    }

    printf("Vetor impar = ");
    for(i=0;i<c;i++)
    {
        printf("%d ",vi[i]);
    }
}
