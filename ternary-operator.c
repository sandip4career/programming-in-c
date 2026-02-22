#include<stdio.h>

int main()
{
    int x,y,max;
    printf("Enter two number:");
    scanf("%d %d",&x,&y);

    max = (x>y)?x:y;

    printf("%d is greater",max);

    return 0;
}
