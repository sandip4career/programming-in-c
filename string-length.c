//without predifined function

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



/*
//difined function
#include<stdio.h>
#include<string.h>

int main()
{
    char s[30];
    printf("Enter a string:");
    gets(s);

    printf("%d",strlen(s));

    return 0;

}
*/
