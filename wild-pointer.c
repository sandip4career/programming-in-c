#include<stdio.h>

int main()
{
    int *p;   // wild pointer

    printf("%d", *p); // undefined behavior

    return 0;
}
