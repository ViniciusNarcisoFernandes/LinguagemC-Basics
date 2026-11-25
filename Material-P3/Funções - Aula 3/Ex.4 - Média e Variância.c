#include<stdio.h>
#include<math.h>

void preenche_vetor(int m, int A[m])
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
    }
}

void calcula_media_variancia(int m, int A[m])
{
    int i;
    float media, soma1 = 0,soma2 = 0,var;
    for(i=0;i<m;i++)
    {
        soma1 = soma1 + A[i];
    }

    media = soma1/m;
    printf("A media dos valores do vetor e: %f",media);

    printf("\n");

    for(i=0;i<m;i++)
    {
        soma2 = soma2 + pow((A[i] - media),2);
    }
    var = soma2/(m-1);
    printf("O variancia e: %f",var);


}

main()
{
    int m;
    printf("Tamanho do vetor:\n");
    scanf("%d",&m);
    int A[m];

    preenche_vetor(m,A);
    calcula_media_variancia(m,A);
}
