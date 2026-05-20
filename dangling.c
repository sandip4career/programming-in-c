#include<stdio.h>
void fun(void);
int main()
{
    fun();
}

void fun()
{
    int *p;
    {
        int x=10;
        p=&x;
        printf("%d",*p);
        p=NULL;
    }

}
