/*
//sum of digit
#include<stdio.h>

int main()
{
    int num,rem;
    int sum=0;

    printf("Enter any number:");
    scanf("%d",&num);

    while(num>0)
    {
        rem=num%10;
        sum = sum+rem;
        num=num/10;
    }

    printf("sum=%d",sum);

    return 0;

}
*/

/*
//reverse number
#include<stdio.h>

int main()
{
    int num,rem;
    int rev=0;

    printf("Enter any number:");
    scanf("%d",&num);

    while(num>0)
    {
        rem=num%10;
        rev=rev*10 +rem;
        num=num/10;
    }

    printf("Reverse=%d",rev);

    return 0;

}
*/




/*
//palindrome or not
#include<stdio.h>

int main()
{
    int num,rem;
    int rev=0,x;

    printf("Enter any number:");
    scanf("%d",&num);

    x=num;

    while(num>0)
    {
        rem=num%10;
        rev=rev*10 +rem;
        num=num/10;
    }

    if(x==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("not palindrome");
    }

    return 0;

}

*/

//Armstrong number
#include<stdio.h>

int main()
{
    int num,rem;
    int arm=0,x;

    printf("Enter any number:");
    scanf("%d",&num);

    x=num;

    while(num>0)
    {
        rem=num%10;
        arm=arm +rem*rem*rem;
        num=num/10;
    }

    if(x==arm)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("not Armstrong");
    }

    return 0;

}
