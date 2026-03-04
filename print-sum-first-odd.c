#include<stdio.h>

int main()
{
    int num,sum=0;
    int i;

    printf("Enter a number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        sum=sum+i*2-1;
    }
    printf("%d",sum);

    return 0;
}
