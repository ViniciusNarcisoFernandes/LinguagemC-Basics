#include<stdio.h>
#include<math.h>

void preenche_vetorA(int m, int A[m])
{
    int i;
    printf("Preencha o vetor A:\n");
    for(i=0;i<m;i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
    }
}

void preenche_vetorB(int m, int B[m])
{
    int i;
    printf("Preencha vetor B:\n");
    for(i=0;i<m;i++)
    {
        printf("B[%d] = ",i);
        scanf("%d",&B[i]);
    }
}

void preenche_vetorC(int m, int A[m], int B[m], int C[2*m])
{
    int i;
    for(i=0;i<m;i++)
    {
        C[i] = A[i];
        C[m+i] = B[i];
    }

}

void imprime_vetorC(int m, int C[2*m])
{
    int i;
    for(i=0;i<m;i++)
    {
        printf(" %d ",C[i]);
    }
}

main()
{
    int m;
    printf("Tamanho do vetor:\n");
    scanf("%d",&m);
    int A[m],B[m],C[2*m];

    preenche_vetorA(m,A);
    preenche_vetorB(m,B);
    preenche_vetorC(m,A,B,C);
    imprime_vetorC(2*m,C);
}
