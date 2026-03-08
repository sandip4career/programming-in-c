#include<stdio.h>

int main()
{
    //types of declaration
    //char s[20] = {'s','a','n','d','i','p','\0'};
    //char s[20] = "Sun";
    char s[20];

    //taking input from user
    printf("Enter your name:");
    //scanf("%s",&s[0]);

    //talking multiword string multiword string
    gets(s);

   /* int i;
    //print-first technique - 1-1 character
    i=0;
    while(s[i]!='\0')
    {
        printf("%c",s[i]);
        i++;
    }
    */

    //2nd technique direct
    //printf("%s",s);

    //3rd technique
    puts(&s[0]);

    return 0;
}
