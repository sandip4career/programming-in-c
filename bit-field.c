#include<stdio.h>

struct date
{
    unsigned int d:5;
    unsigned int m:4;
    unsigned int y;

};

int main()
{
    struct date d1 = {23,04,2026};

    printf("size of d1 is %d",sizeof(d1));

    return 0;
}
