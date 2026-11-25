#include<stdio.h>
#include<math.h>

main()
{
    float salario;
    printf("Renda mensal: ");
    scanf("%f",&salario);

    if (salario <= 2)
    {
        printf("Isento de imposto.");
    }
    else if (salario > 2 && salario <= 3)
    {
        printf("Desconto de 5 porcento do valor.");
    }
    else if (salario > 3 && salario <= 5)
    {
        printf("Desconto de 10 porcento do valor.");
    }
    else if (salario > 5 && salario <=7)
    {
        printf("Desconto de 15 porcento do valor.");
    }
    else if (salario > 7)
    {
        printf("Desconto de 20 porcento do valor.");
    }
}
