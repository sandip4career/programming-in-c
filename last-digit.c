#include<stdio.h>
#include<conio.h>

int main()
{
    int num,x;
    printf("Enter a number:");
    scanf("%d",&num);

    x = num%10;
    printf("Last digit of %d is %d",num,x);
    return 0;
}
