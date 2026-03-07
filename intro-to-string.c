#include<stdio.h>

int main()
{
    char s[20] = {'s','a','n','d','i','p','\0'};
    int i;
    //print-first technique - 1-1 character
    i=0;
    while(s[i]!='\0')
    {
        printf("%c",s[i]);
        i++;
    }


    //2nd technique direct
    //printf("%s",s);

    //3rd technique
    //puts(s);

    return 0;
}
