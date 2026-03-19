#include<stdio.h>

int main()
{
    int i,r,x,sum;

    for(i=1;i<=1000;i++)
    {
        x=i;

        sum=0;

        while(x!=0)
        {
         r=x%10;
        sum=sum+r*r*r;
        x=x/10;
        }

        if(sum==i)
        {
            printf("%d ",i);
        }


    }
    return 0;
}
