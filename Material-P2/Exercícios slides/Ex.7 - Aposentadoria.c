#include<stdio.h>
#include<math.h>

main()
{
    float idade, tempo;
    printf("Idade da pessoa: ");
    scanf("%f",&idade);
    printf("Tempo de trabalho: ");
    scanf("%f",&tempo);

    if ((idade == 65) || (tempo>=30) || (idade >= 60 && tempo >= 25))
    {
        printf("Pode se aposentar");
    }
    else
    {
        printf("Nao pode se aposentar");
    }
}
