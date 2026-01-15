#include <stdio.h>

int main() {
    int x;
    int linha = 0;
    char letraInicial = 'A';

    printf("Insira o numero de ramos: ");
    scanf("%d", &x);

    while (linha < x) {
        int coluna = 0;
        
        while (coluna <= linha) {
            printf("%c", letraInicial + linha);
            coluna++;
        }

        printf("\n");
        linha++;
    }

    return 0;
}