#include<stdio.h>
#include<math.h>

main()
{
    float soma = 0,valor;
    int i,n;
    printf("Qtde de valores que queremos somar: ");
    scan("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Valor[%d] = ",i);
        scanf("%f",&valor);

        soma = soma + valor;
    }

    printf("A soma dos valores: %f",soma);
}
