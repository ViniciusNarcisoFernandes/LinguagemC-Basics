#include<stdio.h>
#include<math.h>

main()

{
    int i,n,maior = 0,menor = 0;
    printf("Numero de termos: ");
    scanf("%d",&n);
    int v[n];

    for(i=0;i<n;i++)
    {
        printf("v[%d] = ",i);
        scanf("%d",&v[i]);

        if (v[i] > maior)
        {
            maior = v[i];
        }
    }
    printf("vetor = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }

    printf("\n");
    printf("O maior valor do vetor e: %d",maior);
}
