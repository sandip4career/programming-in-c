#include<stdio.h>
#include<stdlib.h>
int main()
{

    int ch,a,b,c;

    while(1)
    {
    system("CLS");
    printf("\n1.Addtion");
    printf("\n2.Odd Even");
    printf("\n3.printing n natural number");
    printf("\n4.Exit");

    printf("\n\nEnter choice:");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("Enter two number:");
            scanf("%d%d",&a,&b);
            c =a+b;
            printf("Sum is %d",c);
            break;

        case 2:
            printf("Enter a number:");
            scanf("%d",&a);
            if(a%2==0)
            {
                printf("even");

            }
            else
            {
                printf("odd");
            }
        break;

        case 3:
            printf("Enter a number:");
            scanf("%d",&a);

            for(b=1;b<=a;b++)
            {
                printf("%d ",b);
            }
        break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice");
    }

    printf("\n\n");
    system("pause");
    }
    return 0;
}
