#include <stdio.h>

void main() 
{
    long int segundos;
    printf("Insira o valor em segundos: ");
    scanf("%ld", &segundos);

    printf("%d segundos são %d horas\n", (int) segundos, (int) segundos/3600);
    printf("%d segundos são %d minutos\n", (int) segundos, (int) segundos%3600/60);
    printf("%d segundos são %d segundos\n", (int) segundos, (int) segundos%60);
}

//pág 58