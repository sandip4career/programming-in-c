
#include<stdio.h>

int main()
{
    char s[20];
    int i;
    printf("Enter a string:");
    gets(s);

    i=0;
    while(s[i]!=NULL) i++;
    printf("%d",i);
    return 0;
}


