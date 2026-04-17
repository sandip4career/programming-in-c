#include<stdio.h>

struct book
{
    int bookid;
    char title[20];
    float price;
};

int main()
{
    struct book b1;
    FILE *fp;
    fp=fopen("f1.txt","wb");
     if (fp == NULL)
    {
        printf("File could not be opened\n");
        return 1;
    }
    printf("Enter bookid title and price:");
    scanf("%d",&b1.bookid);
    getchar();
    fgets(b1.title,20,stdin);
    scanf("%f",&b1.price);

    fwrite(&b1,sizeof(b1),1,fp);

    fclose(fp);
    return 0;
}
