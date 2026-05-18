#include<stdio.h>

int main()
{

    const int x = 3;
    int * const p = &x;//const poiter
    printf("x=%d\n",x);
    ++(*p);

    printf("x=%d",x);

}
