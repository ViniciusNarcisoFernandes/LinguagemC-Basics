#include<stdio.h>

float soma_de_pi(int n)
{
    int i;
    float pi=0;
    for(i=1;i<=n;i++)
    {
        pi = pi + (4*pow(-1,i+1))/(2*i-1);
    }

    return pi;
}

main()
{
    int n;
    float resposta;
    printf("Numero de termos: ");
    scanf("%d",&n);
    resposta = soma_de_pi(n);
    printf("Valor da soma = %f",resposta);

}
