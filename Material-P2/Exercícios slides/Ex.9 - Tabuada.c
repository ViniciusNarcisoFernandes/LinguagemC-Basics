#include<stdio.h>
#include<math.h>

main()
{
    int i,num;
    printf("Valor desejada a ser visto na tabela: ");
    scanf("%d",&num);

    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d \n",num,i,num*i);
    }
}
