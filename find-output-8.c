#include<stdio.h>

int main()
{
    int a=1, b=1;

    if(a--||b--&&++a)
    {
        printf("%d %d",a,b);
    }
    else
    {
        printf("%d %d",b,a);
    }
}
