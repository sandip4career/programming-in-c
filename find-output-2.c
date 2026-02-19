#include<stdio.h>
#include<conio.h>

int main()
{
    //unsigned operator is greater than signed operator
    //sizeof() - unsigned
  if(sizeof(int)>-1)
  {
      printf("hi");
  }
  else
  {
      printf("hello");
  }
  getch();
}
