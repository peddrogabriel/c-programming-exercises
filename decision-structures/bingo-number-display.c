// This program reads a number and displays it as a bingo draw result.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    int numero;

    printf("Escolha um numero inteiro:");
    scanf("%d", &numero);

    printf("O numero sorteado foi: %d", numero);

    return 0;
}