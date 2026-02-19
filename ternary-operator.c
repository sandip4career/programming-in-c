#include<stdio.h>
#include<conio.h>

int main()
{
    int x,a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);

    x = a>b?a:b;
    printf("%d is greater",x);
    return 0;
}
