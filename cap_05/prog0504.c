#include <stdio.h>

void linha(int num) {
    for(int i = 1; i <= num; i++) putchar('*');
    
    putchar('\n');
}

int main() {
    linha(5);
    linha(10);
    linha(100);
}