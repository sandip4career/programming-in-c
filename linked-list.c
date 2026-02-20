#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//1.create struct for node
struct node
{
    int info;
    struct node* link; //store address of next node
};

struct node* start = NULL;

//2.create node
struct node* CreateNode()
{
    struct node* n;

    n = (struct node*)malloc(sizeof(struct node));

    return(n);
}

//3.insert node
void InsertNode()
{
    struct node* temp,*t;

    temp=CreateNode();

    printf("Enter a number:");
    scanf("%d",&temp->info);
    temp->link = NULL;

    //if node is empty
    if(start == NULL)
    {
        start = temp;
    }
    else
    {
        //searching last node
        t = start;
        while(t->link != NULL)
        {
            t = t->link;
        }
        t->link = temp;
    }

}

void deleteNode()
{
    struct node* r;
    if(start == NULL)
    {
        printf("list is empty");
    }
    else
    {
        r = start;
        start = start -> link;
        free(r);
    }
}


void viewList()
{
    struct node* t;

    if(start == NULL)
    {
        printf("List is empty");
    }
    else
    {
        t=start;
        while(t!=NULL)
        {
            printf("%d ",t->info);
            t = t->link;
        }
    }
}

int menu()
{
    int ch;

    printf("\n1.Add Value to the list");
    printf("\n2.Delete First Value to the list");
    printf("\n3.View List");
    printf("\n4.Exit");

    printf("\n\nEnter your choice:");
    scanf("%d",&ch);

    return(ch);

}

int main()
{
    while(1)
    {
        system("cls");
        switch(menu())
        {
        case 1:
            InsertNode();
            break;

        case 2:
            deleteNode();
            break;

        case 3:
            viewList();
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Invalid choice");
            break;





        }
        printf("\n");
        printf("\n");
        system("pause");
    }
    getch();

   return 0;

}





