/*
ellipse...
va_list
va_start
va_end
va_arg
*/
#include<stdio.h>
#include<stdarg.h>

void printNumber(int size,...)
{
    int i,value;
    va_list args;
    va_start(args,size);
    for(i=0;i<size;i++)
    {
        value = va_arg(args,int);
        printf("%d ",value);
    }
    va_end(args);
    printf("\n");

}

int main()
{
    printNumber(3,5,6,7);
    printf("\n");

    return 0;
}
