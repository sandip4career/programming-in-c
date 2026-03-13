#include<stdio.h>

int main()
{
    int i;
    int a,b;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);

    for(i=a>b?a:b;i<=a*b;i=i+(a>b?a:b))
    {
        if(i%a==0 && i%b==0)
            {
                break;
            }
    }
    printf("%d",i);
    return 0;
}
