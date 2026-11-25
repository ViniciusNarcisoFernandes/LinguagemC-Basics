#include<stdio.h>
#include<math.h>

main()
{
    int i,j,m,n,menor,maior;
    printf("Linhas e Colunas: ");
    scanf("%d %d",&m,&n);
    int A[m][n];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);

            if((i==0 && j ==0) || A[i][j] > maior)
            {
                maior = A[i][j];
            }
            else if ((i == 0 && j == 0) || A[i][j] < menor)
            {
                menor = A[i][j];
            }
        }
    }

    printf("Valor do maior = %d , Valor menor = %d",maior,menor);


}
