#include <stdio.h>

void linha(int num, char ch) {
    for(int i = 1; i <= num; i++) putchar(ch);
    
    putchar('\n');
}

int main() {
    linha(5, '+');
    linha(10, '-');
    linha(20, '*');
}