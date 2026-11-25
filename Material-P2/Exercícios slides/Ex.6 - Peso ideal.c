#include<stdio.h>
#include<math.h>

main()
{
    float h;
    int sexo;
    printf("Sexo: 0 ou 1: ");
    scanf("%d",&sexo);
    printf("Altura da pessoa: ");
    scanf("%f",&h);

    if (sexo == 0)
    {
        printf("E do sexo masculino. Seu peso ideal e: %f.",72.7*h-58);
    }
    else
    {
        printf("E do sexo feminimo. Seu peso ideal e: %f",62.1-h-44.7);
    }
}

}
