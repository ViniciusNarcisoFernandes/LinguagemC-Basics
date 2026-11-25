#include<stdio.h>
#include<math.h>

main()
{
    int i,j,m,n,c1 = 0,c2 = 0;
    printf("Linhas e colunas: ");
    scanf("%d %d",&m,&n);
    int A[m][n];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);

            if(A[i][j]%2 == 0 && A[i][j] > 0)
            {
                c1 = c1 + 1;
            }
            else if (A[i][j]%2 == 1 && A[i][j] > 0)
            {
                c2 = c2 + 1;
            }
        }
    }

    int vp[c1],vi[c2],cp = 0,ci = 0;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i][j]%2 == 0 && A[i][j] > 0)
            {
                vp[cp] = A[i][j];
                cp++;
            }
            else if (A[i][j]%2 == 1 && A[i][j] > 0)
            {
                vi[ci] = A[i][j];
                ci++;
            }
        }
    }

    printf("Vetor par = ");
    for(i=0;i<c1;i++)
    {
        printf("%d ",vp[i]);
    }
    printf("\n");
    printf("Vetor impar = ");
    for(i=0;i<c2;i++)
    {
        printf("%d ",vi[i]);
    }
}
