#include<stdio.h>
#include<math.h>

main()
{
    float M[3][3],v1[6],v2[3];
    int i,j,aux1=0,aux2=0;

    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("M[%d,%d] = ",i,j);
            scanf("%f",&M[i][j]);

            if (i != j)
            {
                v1[aux1] = M[i][j];
                aux1 = aux1 + 1;
            }
            else
            {
                v2[aux2] = M[i][j];
                aux2 = aux2 + 1;
            }
        }
    }

    printf("V1: ");
    for(i=0;i<aux1;i++)
    {
        printf("%f ",v1[i]);
    }

    printf("\n");

    printf("V2: ");
    for(i=0;i<aux2;i++)
    {
        printf("%f ",v2[i]);
    }
}
