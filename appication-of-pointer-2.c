#include<stdio.h>

int main()
{
    int arr[5],*p,i;
    p=&arr[0];

    for(i=0;i<=4;i++)
    {
        scanf("%d",p+i);
    }

    for(i=0;i<=4;i++)
    {
        printf("%d ",*(p+i));
    }


    return 0;
}
