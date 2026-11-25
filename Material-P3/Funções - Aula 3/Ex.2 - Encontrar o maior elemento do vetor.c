#include<stdio.h>
#include<math.h>

void preenche_vetor(int m, int A[m])
{
    int i;
    printf("Vetor:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&A[i]);
    }
}

void imprime_vetor(int m, int A[m])
{
    int i;
    printf("Vetor digitado:\n");
    printf("[");
    for(i=0;i<m;i++)
    {
        printf(" %d ", A[i]);
    }
    printf("]");
    printf("\n");
}

void maior_valor(int m, int A[m])
{
    int i,maior;
    for(i=0;i<m;i++)
    {
        if(i==0 || A[i] > maior)
        {
            maior = A[i];
        }
    }
    printf("Maior valor: %d", maior);
    printf("\n");
}

main()
{
    int m;
    printf("Tamanho no vetor:\n");
    scanf("%d",&m);
    int A[m];

    preenche_vetor(m,A);
    imprime_vetor(m,A);
    maior_valor(m,A);
}
