#include<stdio.h>
#include<math.h>

main()
{
    int i,n;
    printf("Qtde de valores: ");
    scanf("%d",&n);
    float Soma = 0;

    for(i=0;i<n;i++)
    {
        Soma = Soma + pow(-1,i)/pow((2*i+1),3);
    }
    printf("A soma da serie e: %f",Soma);
}
