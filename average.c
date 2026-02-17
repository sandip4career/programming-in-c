#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("Enter three number:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    avg = (a+b+c)/3.0;

    printf("Average of %d %d %d is %.2f",a,b,c,avg);

    getch();
    return 0;
}
