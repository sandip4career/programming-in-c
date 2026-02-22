#include<stdio.h>


int main()
{
    int fib(int);
    int n,i;
    printf("Enter a how many terms of fibonacci series you want to see:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}

int fib(int n)
{
    if(n==1||n==2)
    {
        return(1);
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}
