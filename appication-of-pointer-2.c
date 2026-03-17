#include<stdio.h>
void input(int *);
void display(int *);
void sort(int *);
int main()
{
    int a[5];
    input(a);
    display(a);
    printf("\n");
    sort(a);
    display(a);
    return 0;
}

void input(int *p)
{
    int i;
    for(i=0;i<=4;i++)
    {
        scanf("%d",p+i);
    }
}

void display(int *p)
{
    int i;
    for(i=0;i<=4;i++)
    {
        printf("%d ",*(p+i));
    }
}

void sort(int *p)
{
    int temp;
    int round,i;
    for(round=1;round<=4;round++)
    {
        for(i=0;i<=4-round;i++)
        {
            if(*(p+i)>*(p+i+1))
            {
                temp=*(p+i);
                *(p+i) = *(p+i+1);
                *(p+i+1) = temp;
            }
        }
    }
}
