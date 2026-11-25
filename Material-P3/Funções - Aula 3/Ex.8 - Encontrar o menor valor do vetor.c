#include<stdio.h>
#include<math.h>

void preenche_vetor(int n, int A[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
    }
}

void menor_valor(int n, int A[n])
{
    int i, menor;
    for(i=0;i<n;i++)
    {
        if(i==0 || A[i] < menor)
        {
            menor = A[i];
        }
    }
    printf("O menor valor e = %d",menor);
}

main()
{
    int n;
    printf("Qtde de valores no vetor: ");
    scanf("%d",&n);
    int A[n];
    preenche_vetor(n,A);
    menor_valor(n,A);
}
