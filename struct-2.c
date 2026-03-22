#include<stdio.h>

struct book
{
    int bookid;
    char title[20];
    float price;
};

struct book input()
{
    struct book b;
    printf("Enter book id, title and price: ");
    scanf("%d", &b.bookid);
    scanf("%s",b.title);  // read at most 19 chars + 1 for '\0'
    scanf("%f", &b.price);

    return b;
}

void display(struct book b)
{
    printf("\n%d %s %.2f\n", b.bookid, b.title, b.price);
}

int main()
{
    struct book b1;
    b1 = input();
    display(b1);
    return 0;
}
