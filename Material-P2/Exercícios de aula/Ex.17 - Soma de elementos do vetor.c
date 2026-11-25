#include<stdio.h>
#include<math.h>

main()
{
    int i,n;
    printf("Qtde de elementos do vetor: ");
    scanf("%d",&n);
    float v[n],soma = 0;

    printf("Elementos do vetor: ");
    for(i=0;i<n;i++)
    {
        scanf("%f",&v[i]);
        soma = soma + v[i];
    }

    printf("Vetor = ");
    for(i=0;i<n;i++)
    {
        printf("%f ",v[i]);
    }
    printf("\n");
    printf("Valor da soma dos elementos e: %f",soma);
}
