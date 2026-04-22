#include<stdio.h>
void f1();
int x=2;
int main()
{
    extern int x;
    printf("%d ",x);
    f1();
    f1();
    return 0;
}

void f1()
{
    static int i=0;
    i++;
    printf("%d ",i);
}
