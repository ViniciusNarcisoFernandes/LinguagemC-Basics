#include<stdio.h>

void verifica_IBGE(float salario)
{
    if (salario > 20)
    {
        printf("Classe A");
    }
    else if (salario <= 20 && salario >= 11)
    {
        printf("Classe B");
    }
    else if (salario <=10 && salario>= 5)
    {
        printf("Classe C");
    }
    else if (salario >=3 && salario <= 4)
    {
        printf("Classe D");
    }
    else if (salario<=2 && salario > 0)
    {
        printf("Classe E");
    }
    else
    {
        printf("Salario invalido");
    }
}

main()
{
    float salario;
    printf("Valor do salario: ");
    scanf("%f",&salario);
    verifica_IBGE(salario);
}
