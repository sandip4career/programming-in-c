#include<stdio.h>

int length(char*);
char* reverse(char*);

int main()
{
    char s[12] = "computer";

    printf("%d", length(s));
    printf("\n%s", reverse(s));
}

int length(char *p)
{
    int i;
    for(i = 0; *(p + i) != '\0'; i++);
    return i;
}

char* reverse(char *p)
{
    int l, i, temp;

    for(l = 0; *(p + l) != '\0'; l++);

    for(i = 0; i < l / 2; i++)
    {
        temp = *(p + i);
        *(p + i) = *(p + l - 1 - i);
        *(p + l - 1 - i) = temp;
    }

    return p;
}
