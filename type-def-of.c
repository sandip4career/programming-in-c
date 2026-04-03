#include<stdio.h>
#include<string.h>

    typedef struct
    {
        int rollno;
        char name[20];
        int age;
    }student;

int main()
{

    student s1;
    s1.rollno=32;
    strcpy(s1.name,"sandip");
    s1.age=5;

    printf("%d %s %d",s1.rollno,s1.name,s1.age);
    return 0;
}
