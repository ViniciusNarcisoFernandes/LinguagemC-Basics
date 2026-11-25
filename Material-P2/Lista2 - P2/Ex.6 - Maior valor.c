#include<stdio.h>
#include<math.h>

main()
{
    int i,n,numero, maior;
    printf("Qtde de valores que querem ler: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        printf("Digite o numero: ");
        scanf("%d",&numero);

        if (i == 1 || numero>maior)
        {
            maior = numero;
        }
    }
    printf("maior: %d \n",maior);
}
