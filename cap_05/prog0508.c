#include <stdio.h>

int isEqual(int x, int y) {
    if(x == y) return 1;
    else return 0;
}

int main() {
    printf("%d\n", isEqual(2, 2));
}