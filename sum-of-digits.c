#include<stdio.h>

int main()
{
    int i,r,num;
    int sum=0,x;

    printf("Enter a number:");
    scanf("%d",&num);

    x=num;
    while(x!=0)
    {
      r=x%10;
      sum=sum + r;
      x=x/10;
    }

    printf("The sum of %d is %d",num,sum);


    return 0;
}
