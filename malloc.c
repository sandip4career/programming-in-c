#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *p;
    p = (float*)malloc(4);

    *p = 2.3;

    printf("%f", *p);

    return 0;
}
