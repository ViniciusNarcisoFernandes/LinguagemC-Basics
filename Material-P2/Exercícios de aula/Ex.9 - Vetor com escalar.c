#include<stdio.h>
#include<math.h>

main()

{
    int i,n,a;
    printf("Qte de elementos do vetor: ");
    scanf("%d",&n);
    printf("Escalar: ");
    scanf("%d",&a);
    int v1[n],v2[n];

    for(i=0;i<n;i++)
    {
        printf("v[%d] = ",i);
        scanf("%d",&v1[i]);
    }

    for (i=0;i<n;i++)
    {
        v2[i] = a*v1[i];
    }

    printf("v1 = ");
    for (i=0;i<n;i++)
    {
        printf("%d ",v1[i]);
    }

    printf("v2 = ");
    for (i=0;i<n;i++)
    {
        printf("%d ",v2[i]);
    }
}
