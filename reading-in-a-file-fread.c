#include <stdio.h>

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

    fp = fopen("f1.txt", "rb");
    if (fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    while(fread(&b1, sizeof(b1), 1, fp)>0);

    printf("Book ID: %d\n", b1.bookid);
    printf("Title: %s", b1.title);
    printf("Price: %.2f\n", b1.price);

    fclose(fp);
    return 0;
}
