#include<stdio.h>
#include<math.h>

main()
{
    float peso,altura;
    int sexo;

    printf("Altura: ");
    scanf("%f",&altura);
    printf("Sexo a ser analisado: ");
    scanf("%d",&sexo);

    if (sexo == 1)
    {
        peso = 72.7*altura - 58;
        printf("E homem e seu peso ideal e %f",peso);
    }
    else
    {
        peso = 62.1*altura - 44.7;
        printf("E mulher e seu peso ideal e %f",peso);
    }
}
