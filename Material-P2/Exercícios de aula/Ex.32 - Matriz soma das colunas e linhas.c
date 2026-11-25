#include<stdio.h>
#include<math.h>

main()
{
    int i,j,m,n,somac,somal;
    printf("Linhas e Colunas: ");
    scanf("%d %d",&m,&n);
    int A[m][n],vl[m],vc[n],auxl=0,auxc=0;

    printf("Matriz A = \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    /*Obtendo o vetor linha*/
    for(i=0;i<m;i++)
    {
        somal = 0;
        for(j=0;j<n;j++)
        {
            somal = somal + A[i][j];
        }
        vl[auxl] = somal;
        auxl = auxl + 1;
    }

    /*Obtendo o vetor coluna*/

    for(j=0;j<n;j++)
    {
        somac = 0;
        for(i=0;i<m;i++)
        {
            somac = somac + A[i][j];
        }
        vc[auxc] = somac;
        auxc = auxc + 1;
    }

    printf("Vetor linha = ");
    for(i=0;i<auxl;i++)
    {
        printf("%d ",vl[i]);
    }

    printf("\n");

    printf("Vetor coluna = ");
    for(i=0;i<auxc;i++)
    {
        printf("%d ",vc[i]);
    }
}
