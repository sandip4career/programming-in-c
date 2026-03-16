#include<stdio.h>

int main()
{
    int i,N,product=1;

    printf("Enter a natural number: ");
    scanf("%d",&N);

    //logic
    for(i=1;i<=N;i++)
    {
        product=product*i;
    }

    printf("product is %d",product);

    return 0;
}
