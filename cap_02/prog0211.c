#include <stdio.h>

void main() 
{
    int a,b;
    printf("Insira o primeiro valor: ");
    scanf("%d", &a);

    printf("Insira o segundo valor: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, (a+b));
    printf("%d - %d = %d\n", a, b, (a-b));
    printf("%d x %d = %d\n", a, b, (a*b));
    printf("%d / %d = %d\n", a, b, (a/b));
}