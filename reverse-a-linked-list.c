#include <stdio.h>
#include <stdlib.h>

struct node
{
    int x;
    struct node* next;
};

struct node *start = NULL;

void insert(int value)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));

    temp->x = value;
    temp->next = NULL;

    if(start == NULL)
    {
        start = temp;
    }
    else
    {
        struct node *p = start;

        while(p->next != NULL)
        {
            p = p->next;
        }

        p->next = temp;
    }
}

void printList()
{
    struct node *p = start;

    while(p != NULL)
    {
        printf("%d -> ", p->x);
        p = p->next;
    }

    printf("NULL\n");
}

void reverse()
{
    struct node *prev = NULL;
    struct node *curr = start;
    struct node *next = NULL;

    while(curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    start = prev;
}

int main()
{
    insert(1);
    insert(2);
    insert(3);

    printf("Original Linked List:\n");
    printList();

    reverse();

    printf("Reversed Linked List:\n");
    printList();

    return 0;
}
