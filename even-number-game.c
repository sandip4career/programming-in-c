#include<stdio.h>

int main()
{
    int i,n;

    for(i=1;i<=3;i++)
    {
        printf("Enter a even number:");
        scanf("%d",&n);

       if(n%2==0)
       {
           break;
       }
    }

    if(i==4)
    {
        printf("Game over");
    }
    else
    {
        printf("You win");
    }
    return 0;
}
