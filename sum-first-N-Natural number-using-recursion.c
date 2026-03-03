#include<stdio.h>
int sum(int);
int main()
{
    int k;
    k = sum(10);
    printf("%d",k);
    return 0;
}

int sum(int num)
{
    int s;
    if(num==1)
    {
        return(num);
    }
    s=num + sum(num-1);
    return(s);
}
