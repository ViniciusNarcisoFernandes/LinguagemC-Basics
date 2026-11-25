void preenche_matriz(int m, int n, float M[m][n])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("M[%d][%d] = ",i,j);
            scanf("%f",&M[i][j]);
        }
    }
}

void mostra_matriz (int m, int n, float M[m][n])
{
    int i,j;
    printf("A matriz original:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %f ",M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void matriz_transposta(int m, int n, float M[m][n], float Mt[n][m])
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            Mt[j][i] = M[i][j];
        }
    }
    printf("A matriz transposta:\n");
    for(j=0;j<n;j++)
    {
        for(i=0;i<m;i++)
        {
            printf(" %f ",Mt[j][i]);
        }
        printf("\n");
    }
    printf("\n");
}

main()
{
    int m,n;
    printf("Linhas e colunas: ");
    scanf("%d %d",&m,&n);
    float M[m][n],Mt[n][m];
    preenche_matriz(m,n,M);
    mostra_matriz(m,n,M);
    matriz_transposta(m,n,M,Mt);
}
