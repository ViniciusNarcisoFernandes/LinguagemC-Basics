#include<stdio.h>
#include<math.h>

main()
{
    int i,j,n;
    printf("Tamanho do vetor: ");
    scanf("%d",&n);
    int v[n],con = 0,con2 = 0;

    for(i=0;i<n;i++)
    {
        printf("v[%d] = ",i);
        scanf("%d",&v[i]);

        for(j=2;j*j<=v[i];i++)
        {
            if(v[i]%j == 0)
            {
                con = con + 1;
            }
        }

        if(con == 1)
        {
            con2 = con2 + 1;
        }
    }

    printf("A quantidade de numero primos no vetor e: %d",con2);
}
