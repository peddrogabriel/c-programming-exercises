// This program reads a string and prints it in reverse order using recursion.
// Author: Pedro Gabriel

#include <stdio.h>

void inverter(char array[], int tamanho, int indice)
{
    if (tamanho == indice)
    {
        return;
    }

    if (array[indice] == '\0')
    {
        return;
    }

    inverter(array, tamanho, indice + 1);

    printf("%c", array[indice]);

}

int main()
{

    char array[257];

    fgets(array, 257, stdin);

    inverter(array, 257, 0);

    return 0;
}