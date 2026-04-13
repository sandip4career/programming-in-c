#include<stdio.h>

int main()
{
    int num,i;
    int f0=-1,f1=1,f;

    printf("Enter a number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        f=f0+f1;

        printf("%d ",f);
        f0=f1;
        f1=f;

    }

    return 0;
}
