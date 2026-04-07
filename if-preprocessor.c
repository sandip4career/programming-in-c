#include <stdio.h>

// it compare with number not words
#define India 1
#define Pakistan 2
#define Bangladesh 3
#define Nepal 4

#define country India

int main() {

#if country == Pakistan
    printf("Pakistani Rupees");

#elif country == Bangladesh
    printf("Taka");

#elif country == Nepal
    printf("Nepali Rupees");

#else
    printf("Indian Rupees");

#endif

    return 0;
}
