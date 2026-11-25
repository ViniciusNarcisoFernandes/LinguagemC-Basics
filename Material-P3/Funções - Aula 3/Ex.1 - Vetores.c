#include<stdio.h>
#include<math.h>

void preenche_vetor(int m, int A[m])
{
    int i;
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

main()
{
    int m,r;
    printf("Insira o tamanho do vetor(es):\n");
    scanf("%d",&m);
    int A[m],B[m];
    printf("Insira um escalar:\n");
    scanf("%d",&r);

    printf("Insira o vetor A:\n");
    preenche_vetor(m,A);
    imprime_vetor(m,A);
}
