
#include<stdio.h>

int main()
{
    int N,i;

    printf("Enter a number:");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        printf("%d ",i*2);
    }
    return 0;
}
