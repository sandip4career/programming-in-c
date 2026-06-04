#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5; j++) {
            if (j <= i) {
                printf("%d", (i % 2 == j % 2) ? 1 : 0);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
