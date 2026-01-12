#include <stdio.h>

int main() {

    int i;
    puts("Insira o digito desejado ");
    scanf("%d", &i);

    puts("********************");

    do {
        printf("%d\n", i--);
    } while (i > 0);

    puts("********************");

    return 0;
}