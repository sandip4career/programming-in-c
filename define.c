#include <stdio.h>
#define pi 3.14
#define product(a,b) a*b
#define square(a) a*a

int main() {
    int r;
    float area;

    printf("Enter radius: ");
    scanf("%d", &r);

    area = pi * r * r;

    printf("Area of circle is %.2f\n", area);
    printf("sum of 2 and 4 is %d",product(2,4));
    printf("square of 7 is %d",square(7));
    return 0;
}
