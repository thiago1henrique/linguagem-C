#include <stdio.h>

int isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

int main() {
    char c;
    while(1) {
        c=getchar();
        if(!isDigit(c)) putchar(c);
    }
}