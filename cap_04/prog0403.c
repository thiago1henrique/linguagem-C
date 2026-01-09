#include <stdio.h>

int main() {

    int y;

    printf("Introduza um número: ");
    scanf("%d", &y);



    while (y <= 10) {
        printf("%d * %2d = %2d\n", (y - 1), y, ((y - 1) * y));
        y++;
    }

    return 0;
}