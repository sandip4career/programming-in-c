#include<stdio.h>
#include<windows.h>

int main()
{
    SYSTEMTIME stime;

    GetSystemTime(&stime);

    printf("%02d/ %02d/ %04d",stime.wDay,stime.wMonth,stime.wYear);

    return 0;
}
