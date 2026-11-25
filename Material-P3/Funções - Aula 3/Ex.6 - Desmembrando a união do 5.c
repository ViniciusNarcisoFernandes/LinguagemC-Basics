#include<stdio.h>
#include<math.h>

void preenche_vetorC(int m, int C[2*m])
{
    int i;
    printf("Preencha o vetor C:\n");
    for(i=0;i<2*m;i++)
    {
        printf("C[%d] = ",i);
        scanf("%d",&C[i]);
    }
}

void separa_em_dois_vetores(int m , int C[2*m])
{
    int i,cp=0,ci=0;
    for(i=0;i<2*m;i++)
    {
        if(i%2==0)
        {
            cp = cp + 1;
        }
        else
        {
            ci = ci + 1;
        }
    }

    printf("\n");

    int A[cp],B[ci],cpp = 0, cii = 0;

    printf("Vetor A e B");

    for(i=0;i<2*m;i++)
    {
        if(i%2==0)
        {
            A[cpp] = C[i];
            printf(" %d ",A[cpp]);
            printf("\n");
            cpp = cpp + 1;
        }
        else
        {
            B[cii] = C[i];
            printf(" %d ",B[cii]);
            cii = cii + 1;
        }
    }
}

main()
{
    int m;
    printf("Tamanho do vetor:\n");
    scanf("%d",&m);
    int C[2*m];

    preenche_vetorC(m,C);
    separa_em_dois_vetores(m,C);
}
