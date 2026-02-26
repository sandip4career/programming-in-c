#include<stdio.h>

int main()
{
    char s[20],temp;
    int i,l;
    printf("Enter a string:");
    gets(s);

    //length of a string
    for(l=0;s[l]!=NULL;l++);


    for(i=0;i<l/2;i++)
    {
        temp = s[i];
        s[i]=s[l-i-1];
        s[l-i-1] = temp;
    }

    printf("Reverse is %s",s);
    return 0;
}



//simple
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20] = "shekhar";
    int i;

    for(i=strlen(s);i>=0;i--)
    {
        printf("%c ",s[i]);
    }

    return 0;
}
*/
