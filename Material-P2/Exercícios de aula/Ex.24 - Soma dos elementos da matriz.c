#include<stdio.h>
#include<math.h>

main()
{
    int i,j,m,n;
    printf("Linhas e Colunas: ");
    scanf("%d %d",&m,&n);
    float A[m][n], soma = 0;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%f",&A[i][j]);

            soma = soma + A[i][j];
        }
    }

    printf("A soma dos elementos da matriz e: %f",soma);
    printf("\n");
    printf("Matriz A = \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%f ",A[i][j]);
        }
        printf("\n");
    }
}
