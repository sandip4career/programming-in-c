#include<stdio.h>

int  main()
{
    int a[10];
    int i,se=0,so=0;

    printf("Enter 10 number: ");

    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0;i<=9;i++)
    {

    if(a[i]%2==0)
    {
        se = se + a[i];
    }
    else
    {
        so = so + a[i];
    }
    }

    printf("Sum of Even:%d",se);
    printf("\nSum of Odd:%d",so);
    return 0;
}
