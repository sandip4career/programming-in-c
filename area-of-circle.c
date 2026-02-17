#include<stdio.h>
#include<conio.h>

int main()
{
    int r;
    float area;
    printf("Enter Radius of circle:");
    scanf("%d",&r);

    area = 3.14*r*r;
    printf("Area of circle:%f",area);

    getch();
    return 0;
}
