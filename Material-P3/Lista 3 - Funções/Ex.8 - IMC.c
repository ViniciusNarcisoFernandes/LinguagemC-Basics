#include<stdio.h>

void classifica_imc(float peso, float altura)
{
    float imc;
    imc = peso/pow(altura,2);
    printf("Seu imc = %f \n",imc);
    if(imc <= 18.5)
    {
        printf("Abaixo do peso");
    }
    else if(imc>18.5 && imc <=25)
    {
        printf("Peso normal");
    }
    else if(imc>25 && imc<=30)
    {
        printf("Acima do peso");
    }
    else if (imc > 30)
    {
        printf("Obeso");
    }
}

main()
{
    float peso, altura;
    printf("Peso: ");
    scanf("%f",&peso);
    printf("Altura: ");
    scanf("%f",&altura);
    classifica_imc(peso,altura);
}


