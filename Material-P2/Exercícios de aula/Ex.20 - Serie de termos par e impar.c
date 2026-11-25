#include<stdio.h>
#include<math.h>

main()
{
    int i,n;
    printf("Qtde de termos: ");
    scanf("%d",&n);
    float somapar = 0, somaimpar = 0, somac, SomaTotal;

    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            somac = 2/500;
        }
        else if (i%2 == 1)
        {
            somaimpar = somaimpar - 5/(500-(50*i));
        }
        else if(i%2 == 0)
        {
            somapar = somapar + 2/(500-(50*i));
        }

    }
    printf("Somac = %f \n",somac);
    printf("Somapar = %f \n",somapar);
    printf("Somaimpar = %f \n",somaimpar);
    SomaTotal = somaimpar + somapar + somac;
    printf("A soma da serie e: %f",SomaTotal);
}
