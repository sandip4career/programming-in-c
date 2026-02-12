#include<stdio.h>
#include<conio.h>
void main()
{
    int i,N,n,s,sum=0;

    printf("Enter a number:");
    scanf("%d",&N);

    for(n=1;n<=N;n++)
    {
        s=0;
        for(i=1;i<=n;i++)
        {
            s=s+i;
        }

        sum=sum+s;

    }
       printf("%d",sum);

        getch();
}


/*
1 + 1+2 + 1+2+3 + 1+2+3+n...
*/
