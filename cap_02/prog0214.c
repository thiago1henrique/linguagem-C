#include <stdio.h>

void main() 
{
    int dia;
    int mes;
    int ano;

    printf("Insira o ano: ");
    scanf("%d", &ano);

    printf("Insira o mês: ");
    scanf("%d", &mes);

    printf("Insira o dia: ");
    scanf("%d", &dia);

    printf("Ano de entrada: %d/%d/%d\n", ano, mes, dia);
    printf("Ano formatado: %d/%d/%d\n", dia, mes, ano);
}
