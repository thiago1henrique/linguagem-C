#include <stdio.h>

void main() 
{
    int dia;
    int mes;
    int ano;

    printf("Insira o dia desejado: ");
    scanf("%d", &dia);

    printf("Insira o mês desejado: ");
    scanf("%d", &mes);

    printf("Insira o ano desejado: ");
    scanf("%d", &ano);

    printf("%d/%d/%d\n", dia, mes, ano);
}
