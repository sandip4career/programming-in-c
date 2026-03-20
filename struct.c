#include<stdio.h>

struct date
{
    int d,m,y;
};

int main()
{
    struct date today,d1;
    today.d = 24;
    today.m = 5;
    today.y = 2025;

    printf("%d/%d/%d\n",today.d,today.m,today.y);
    d1=today;

    printf("Enter date:");
    scanf("%d%d%d",&d1.d,&d1.m,&d1.y);

    printf("%d/%d/%d",d1.d,d1.m,d1.y);


    return 0;
}
