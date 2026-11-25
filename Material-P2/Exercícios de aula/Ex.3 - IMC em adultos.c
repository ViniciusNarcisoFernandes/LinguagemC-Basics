#include<stdio.h>
#include<math.h>

main()
{
    float imc,peso,altura;
    printf("Peso: ");
    scanf("%f",&peso);
    printf("Altura: ");
    scanf("%f",&altura);

    imc = peso/pow(altura,2);
    printf("Valor do imc = %f \n",imc);

    if (imc < 18.5)
    {
        printf("Abaixo do peso");
    }
    else if (imc >= 18.5 && imc < 25)
    {
        printf("Peso Normal");
    }
    else if (imc >= 25 && imc < 30)
    {
        printf("Acima do peso");
    }
    else
    {
        printf("Obeso");
    }
}
