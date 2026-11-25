#include<stdio.h>
#include<math.h>

main()
{
    int i,n,escalar;
    printf("Qtde de valores do vetor: ");
    scanf("%d",&n);
    printf("Escalar: ");
    scanf("%d",&escalar);
    float v1[n],v2[n];

    for(i=0;i<n;i++)
    {
        printf("v1[%d] = ",i);
        scanf("%f",&v1[i]);

        v2[i] = escalar*v1[i];
    }

    printf("v1 = ");

    for(i=0;i<n;i++)
    {
        printf("%f ",v1[i]);
    }
    printf("\n");
    printf("v2 = ");
    for(i=0;i<n;i++)
    {
        printf("%f ",v2[i]);
    }
}
