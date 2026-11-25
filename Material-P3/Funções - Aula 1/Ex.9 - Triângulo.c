#include<stdio.h>
#include<math.h>

void verifica_triangulo(int A, int B, int C)
{
    if ((A+B > C) && (A+C > B) && (B+C > A))
    {
        if (A == B && B == C)
        {
            printf("Triangulo Equilatero");
        }
        else if (A == B || A == C || B == C)
        {
            printf("Triangulo Isosceles");
        }
        else
        {
            printf("Triangulo Escaleno");
        }
    }
    else
    {
        printf("Os valores digitados nao formam um triangulo");
    }
}

main()
{
    int A,B,C;
    printf("Digite o valor A: ");
    scanf("%d",&A);
    printf("Digite o valor B: ");
    scanf("%d",&B);
    printf("Digite o valor C: ");
    scanf("%d",&C);

    verifica_triangulo(A,B,C);
}

