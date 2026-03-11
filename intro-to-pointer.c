#include<stdio.h>

int main()
{
    int x=5,*j,**k,***l;
    int a,b;
    int *p,*q;
    j=&x;

    printf("%d %u\n",x,j);
    printf("%d %u\n",*j,&x);
    printf("%u\n",*&j);

    //extended concept of pointer
    k=&j;
    l=&k;
    **k=7;
    ***l = 8;
    printf("%d\n",x);

    //we cannot add,multiply,divide two address only subtract
    //we can add and subtract with int
    p=&a;
    q=&b;
    //&a+&b;
    //p+q;
    //p*q;
    //p/q;
    //&a*5;
    //p*5;

    printf("%d\n",p+1);
    printf("%d\n",p+4);
    printf("%d\n",p-1);
    return 0;
}
