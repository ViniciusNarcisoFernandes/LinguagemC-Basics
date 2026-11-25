#include<stdio.h>
#include<math.h>

main()
{
    int i,valor,mult;
    printf("Tabuada a ser realizada: ");
    scanf("%d",&valor);

    for(i=1;i<=10;i++)
    {
        mult = valor*i;
        printf("%d x %d = %d \n",valor,i,mult);
    }
}
