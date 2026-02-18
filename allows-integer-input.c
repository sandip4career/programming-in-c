#include<stdio.h>
#include<conio.h>



int GetIntegerOnly()
{
    int num=0,ch;

    do
    {

    ch=getch();

    if(ch>=48 && ch<=57)
    {
        printf("%c",ch);
        num=num*10+(ch-48);
    }
    if(ch==13)
    {
        break;
    }


    }while(1);

   return(num);
}

int main()
{
    int x;
    x = GetIntegerOnly();
    printf("\nYou Entered %d",x);
    getch();
    return 0;

}

