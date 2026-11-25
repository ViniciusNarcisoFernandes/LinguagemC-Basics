#include<stdio.h>
#include<math.h>

main()
{
    int i,n,auxpar = 0,auximpar = 0;
    printf("Elementos do vetor = ");
    scanf("%d",&n);
    int v[n];

    for (i=0;i<n;i++)
    {
        printf("v[%d] = ",i);
        scanf("%d",&v[i]);
        if (v[i]%2 == 0)
        {
            auxpar = auxpar + 1;
        }
        else
        {
            auximpar = auximpar + 1;
        }
    }

    int vp[auxpar],vi[auximpar],auxp2 = 0,auxi2 = 0;

    for(i=0;i<n;i++)
    {
        if (v[i]%2 == 0)
        {
            vp[auxp2] = v[i];
            auxp2 = auxp2 + 1;
        }
        else
        {
            vi[auxi2] = v[i];
            auxi2 = auxi2 + 1;
        }
    }

    printf("Vetor par = ");
    for(i=0;i<auxpar;i++)
    {
        printf("%d ",vp[i]);
    }

    printf("Vetor impar = ");
    for(i=0;i<auximpar;i++)
    {
        printf("%d ",vi[i]);
    }
}
