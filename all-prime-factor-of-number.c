#include<stdio.h>

int main()
{
    int num,i;

    printf("Enter a number: ");
    scanf("%d",&num);

    for(i=2;num>1;i++)
    {
        while(num%i==0)
        {
            printf("%d ",i);
            num=num/i;
        }
    }
    return 0;
}
