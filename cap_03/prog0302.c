#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int x;
    printf("Introduza um número: ");
    scanf("%d", &x);

    if (x>=0) printf("Número positivo\n");
    else printf("Número negativo\n");
    system("pause");
    return 0;
}