#include<stdio.h>
#include<math.h>

main()
{
    int i,n;
    printf("Qtde de valores a serem analisadas: ");
    scanf("%d",&n);
    float soma1 = 0,soma2 = 0,v[n],media,desvio;

    for(i=1;i<=n;i++)
    {
        printf("Nota[%d] = ",i);
        scanf("%f",&v[i]);

        soma1 = soma1 + v[i];
    }

    media = soma1/n;
    printf("A media das notas e: %f \n",media);

    for(i=1;i<=n;i++)
    {
        soma2 = soma2 + pow((v[i] - media),2);
    }

    desvio = soma2/(n-1);

    printf("O desvio padrao das notas e: %f",desvio);
}
