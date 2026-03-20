
#include<stdio.h>

int main()
{
    int i,x,y,p=1;

    printf("enter expression:");
    scanf("%d %d",&x,&y);

    for(i=1;i<=y;i++)
    {
        p=p*x;

    }
    printf("%d ",p);


    return 0;
}
