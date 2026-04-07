#include<stdio.h>


#define countr "India"

int main()
{
    #ifdef country
        printf("%s is a great country",country);
    #endif // country

    #ifndef country
        printf("I love my nation");
    #endif // country
    return 0;
}
