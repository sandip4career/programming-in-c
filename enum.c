#include<stdio.h>


enum weekday
{
    sunday, monday, tuesday, wednesday, thursday, friday, saturday
};
int main()
{
    enum weekday today;

    today = saturday;

    printf("%d",today);
}

