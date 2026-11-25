#include<stdio.h>
#include<math.h>

main()
{
    int i,n;
    printf("Tamanho do vetor: ");
    scanf("%d",&n);
    int v1[n],v2[n],S[n];

    for(i=0;i<n;i++)
    {
        printf("v1[%d] = ",i);
        scanf("%d",&v1[i]);
        printf("v2[%d] = ",i);
        scanf("%d",&v2[i]);

        S[i] = v1[i] + v2[i];
    }

    printf("v1 = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",v1[i]);
    }

    printf("v2 = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",v2[i]);
    }

    printf("Vetor Soma = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",S[i]);
    }
}
