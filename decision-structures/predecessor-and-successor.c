// This program reads a number and displays its predecessor and successor.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    int numero;

    printf("Informe um numero:");
    scanf("%d", &numero);

    int ante= numero-1;
    int suce= numero+1;

    printf("%d %d", ante, suce);

    return 0;
}