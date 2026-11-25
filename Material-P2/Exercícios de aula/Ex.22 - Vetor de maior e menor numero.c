#include<stdio.h>
#include<math.h>

main()
{
    int i,n;
    printf("Tamamnho do vetor: ");
    scanf("%d",&n);
    float v[n], maior,menor;

    for(i=0;i<n;i++)
    {
        printf("v[%d] = ",i);
        scanf("%f",&v[i]);

        if ( i == 1 || v[i] > maior)
        {
            maior = v[i];
        }
        else if (i == 1 || v[i] < menor)
        {
            menor = v[i];
        }
    }
    printf("\n");
    printf("Vetor = ");
    for(i=0;i<n;i++)
    {
        printf("%f ",v[i]);
    }
    printf("\n");
    printf("O maior valor e: %f \n",maior);
    printf("O menor valor e: %f \n",menor);
}
