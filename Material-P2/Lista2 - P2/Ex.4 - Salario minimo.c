#include<stdio.h>
#include<math.h>

main()
{
    int s;
    printf("Qtde de salario: ");
    scanf("%d",&s);

    if (s > 20)
    {
        printf("Classe A");
    }
    else if (s>=11 && s<=20)
    {
        printf("Classe B");
    }
    else if (s>=5 && s<=10)
    {
        printf("Classe C");
    }
    else if (s==3 || s==4)
    {
        printf("Classe D");
    }
    else if (s<=2)
    {
        printf("Classe E");
    }
}
