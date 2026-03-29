#include<stdio.h>

union Item
    {
        int x;
        float y;
        char z;
    };

int  main()
{
    union Item i1;

    i1.x = 5;
    printf("x=%d",i1.x);

    i1.y=6;
    printf("y=%d",i1.y);

    i1.z=7;
    printf("z=%d",i1.z);
    return 0;
}
