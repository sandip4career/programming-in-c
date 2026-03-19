#include<stdio.h>

int main()
{
    int grade;
    printf("Enter a number:");
    scanf("%d",&grade);

    switch(grade)
    {
    case 91 ... 100:
        printf("Grade-A");
        break;
    case 81 ... 90:
        printf("Grade-B");
        break;
    case 71 ... 80:
        printf("Grade-C");
        break;
    case 61 ... 70:
        printf("Grade-D");
        break;
    case 51 ... 60:
        printf("Grade-E");
        break;
    case 0 ... 50:
        printf("Grade-F");
        break;
    default:
        printf("Enter valid marks");
    }
    return 0;
}
