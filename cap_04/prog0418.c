#include <stdio.h>

int main() {
    int x;
    int linha = 1;

    puts("Insira o número de ramos (linhas):");
    scanf("%d", &x);

    
    while (linha <= x) {
        
        int coluna = 1; 
        
        
        while (coluna <= linha) {
            printf("*"); 
            coluna++;
        }

        printf("\n");
        linha++;
    }

    return 0;
}