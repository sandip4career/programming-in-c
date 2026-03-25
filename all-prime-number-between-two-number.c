#include<stdio.h>

int main()
{
    int str, end, i, j, count;

    printf("Enter starting number:");
    scanf("%d",&str);

    printf("Enter ending number:");
    scanf("%d",&end);

    for(i = str; i <= end; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
