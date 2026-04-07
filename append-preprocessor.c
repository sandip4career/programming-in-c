#define Action(a,b) a##b+a*b
#include<stdio.h>
int main()
{
    printf("%d",Action(3,4));
    return 0;
}
