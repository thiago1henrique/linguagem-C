#include <stdio.h>

int main() {

    int y = 1;

    while (y <= 10) {
        printf("5 * %2d = %2d\n", y, (5*y));
        y++;
    }

    return 0;
}