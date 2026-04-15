#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("f1.txt","a");
    char str[30];
    printf("Enter a string:");
    fgets(str,30,stdin);

    fputs(str,fp);
    fclose(fp);

    return 0;
}
