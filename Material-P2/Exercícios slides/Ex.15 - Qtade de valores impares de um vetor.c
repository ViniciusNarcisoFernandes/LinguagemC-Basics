#include<stdio.h>
#include<math.h>

main()
{
    int i,n;
    printf("qtde de elementos do vetor: ");
    scanf("%d",&n);
    int v1[n],c = 0 ,cc = 0;

    for(i=0;i<n;i++)
    {
        printf("v[%d] = ",i);
        scanf("%d",&v1[i]);
        if (v1[i]%2 == 1)
        {
            c = c + 1;
        }
    }

    printf("A quantidade de numeros impares no vetor e: %d",c);

    int v2[c];

    for(i=0;i<n;i++)
    {
        if(v1[i]%2 == 1)
        {
            v2[cc] = v1[i];
            cc = cc + 1;
        }
    }
    printf("\n");
    printf("Vetor impar = ");
    for(i=0;i<c;i++)
    {
        printf("%d ",v2[i]);
    }
}
