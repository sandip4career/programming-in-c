#include<stdio.h>
#include<conio.h>
#include<windows.h>


 void gotoxy(int x,int y)
    {
        COORD c;
        c.X = x;
        c.Y = y;

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

    }

void main()
{

   gotoxy(20,8);
   printf("sandip");
    getch();
}

/*
SetConsoleCursorPosition(handle,COORD) - move the cursor

GetStdHandle - return a handle to a requested device(like console).

STD_OUTPUT_HANDLE - STD_OUTPUT_HANDLE means standard output (the console window)
*/
