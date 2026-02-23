#include<stdio.h>
/*
int main()
{
    int a,b,c;
    printf("Enter three number:");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is greater",a);
        }
        else
        {
            printf("%d is greater",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is greater",b);
        }
        else
        {
            printf("%d is greater",c);
        }
    }

    return 0;
}
*/



 //using ternary operator
int main()
{
    int a,b,c;
    printf("Enter three number:");
    scanf("%d %d %d",&a,&b,&c);

    //using ternary operator
    printf("%d is greater",(a>b)?(a>c)?a:c:(b>c)?b:c);


    return 0;
}

