#include <stdio.h>

int main() {

    int i = 0;
    int x = 0;
    printf("Insira o %d valor: ", (i + 1));
    scanf(" %d", &x);
    printf("%d\n", x);
    i++;

    while(x != 0) {
        printf("Insira o %d valor: ", (i + 1));
        scanf(" %d", &x);
        printf("%d\n", x);
        i++;
    }

    return 0;
}