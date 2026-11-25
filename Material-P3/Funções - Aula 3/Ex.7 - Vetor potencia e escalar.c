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
    printf("\n");
}

void vetor_potencia(int n, int A[n])
{
    int i, pot[n];
    printf("Vetor potencia:\n");
    printf("[");
    for(i=0;i<n;i++)
    {
        pot[i] = pow(A[i],3);
        printf(" %d ",pot[i]);
    }
    printf("]\n");
}

void vetor_escalar(int n, float a, int A[n])
{
    int i,escalar[n];
    printf("Vetor escalar:\n");
    printf("[");
    for(i=0;i<n;i++)
    {
        escalar[i] = a*A[i];
        printf(" %d ",escalar[i]);
    }
    printf("]");
}

main()
{
    int n;
    float a;
    printf("Qtde de valores no vetor:\n");
    scanf("%d",&n);
    printf("Valor do escalar:\n");
    scanf("%f",&a);
    int A[n];
    preenche_vetor(n,A);
    vetor_potencia(n,A);
    vetor_escalar(n,a,A);
}











