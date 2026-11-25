#include<stdio.h>
#include<math.h>

void preenche_matriz(int m, int n, float Mat[m][n])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Mat[%d][%d] = ",i,j);
            scanf("%f",&Mat[i][j]);
        }
    }
}

void mat_em_vet(int m, int n, float Mat[m][n], float Vet[m*n])
{
    int i,j,con=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            Vet[con] = Mat[i][j];
            con = con + 1;
        }
    }

    printf("O vetor e:");
    printf("[");
    for(i=0;i<con;i++)
    {
        printf(" %f ",Vet[i]);
    }
    printf("]");

}

main()
{
    int m,n;
    printf("Linhas e colunas: ");
    scanf("%d %d",&m,&n);
    float Mat[m][n],Vet[m*n];
    preenche_matriz(m,n,Mat);
    mat_em_vet(m,n,Mat,Vet);
}
