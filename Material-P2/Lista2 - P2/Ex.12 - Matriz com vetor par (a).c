#include<stdio.h>
#include<math.h>

main()
{
    int i,j,k,m,n,c=0;
    printf("Linhas e Colunas: ");
    scanf("%d %d",&m,&n);
    int A[m][n];

    for(i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
           printf("A[%d][%d] = ",i,j);
           scanf("%d",&A[i][j]);
           if (A[i][j]%2 == 0)
           {
               c = c + 1;
           }
        }
    }

    int vp[c],c1 = 0;

    for(i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            if (A[i][j]%2==0)
            {
                vp[c1] = A[i][j];
                c1 = c1 + 1;
            }
        }
    }

    printf("Vetor par = ");
    for(i=0;i<c;i++)
    {
        printf("%d ",vp[i]);
    }
}
