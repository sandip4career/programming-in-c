#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[20];
    FILE *fp;
    fp=fopen("f1.txt","r");

    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }

    while(fgets(str,20,fp)!=NULL)
    {
        printf("%s",str);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
