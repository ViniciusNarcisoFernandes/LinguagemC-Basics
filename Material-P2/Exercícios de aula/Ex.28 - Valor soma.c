#include<stdio.h>
#include<math.h>

main()
{
    int i,n;
    float soma = 0,valor;
    printf("Qtde de valores a serem somados: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Valor[%d] = ",i);
        scanf("%f",&valor);

        soma = soma + valor;
    }

    printf("A soma dos valores dados e = %f",soma);
}
