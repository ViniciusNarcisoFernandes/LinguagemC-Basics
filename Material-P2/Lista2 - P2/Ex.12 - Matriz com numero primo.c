#include<stdio.h>
#include<math.h>

main()
{
    int i,j,k,m,n;
    printf("Linhas e Colunas: ");
    scanf("%d %d",&m,&n);
    int A[m][n],contprimo = 0,primo;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);

            if (A[i][j] <= 1)
            {
                primo = 0;
            }
            else
            {
                for(k=2;k*k<=A[i][j];k++)
                {
                    if(A[i][j]%k == 0)
                    {
                        primo = 0;
                        break;
                    }
                }
            }

            contprimo = contprimo + 1;
        }
    }

    printf("A quantidade de numeros primos e: %d\n",contprimo);

}
