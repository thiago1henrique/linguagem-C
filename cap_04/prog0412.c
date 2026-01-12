#include <stdio.h>

int main() {

    int a,b,c;
    char ch;

    printf("Introduza um número: "); scanf("%d", &a);
    printf("Introduza um caractere: "); scanf(" %c", &ch);


    for(b = 1; b<=a; b++) {
        for(c = 1; c <= a; c++) 
            putchar(ch);
        putchar('\n');
    }
        
    

    return 0;
}