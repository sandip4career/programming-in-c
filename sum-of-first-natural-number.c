#include<stdio.h>

int main()
{
    int N,i,sum=0;
    printf("Enter first natural number:");
    scanf("%d",&N);

    i=1;
    while(i<=N)
    {
        sum = sum+i;
        i++;

    }

    printf("%d",sum);
    return 0;
}
