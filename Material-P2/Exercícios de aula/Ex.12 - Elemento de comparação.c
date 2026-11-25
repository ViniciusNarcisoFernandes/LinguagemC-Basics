#include<stdio.h>
#include<math.h>

main()

{
    int i,n,a;
    printf("Elemtos do vetor: ");
    scanf("%d",&n);
    printf("Elemto de comparacao: ");
    scanf("%d",&a);
    int v1[n],v2[n];

    for(i=0;i<n;i++)
    {
        printf("v1[%d] = ",i);
        scanf("%d",&v1[i]);

        if (v1[i] < a)
        {
            v2[i] = a;
        }
        else
        {
            v2[i] = v1[i];
        }
    }

    printf("v1 = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",v1[i]);
    }

    printf("\n");
    printf("v2 = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",v2[i]);
    }
}
