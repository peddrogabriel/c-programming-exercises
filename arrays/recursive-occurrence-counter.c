// This program counts how many times a value appears in an array using recursion.
// Author: Pedro Gabriel

#include <stdio.h>

void ler_array(int array[], int tamanho, int indice)
{
    if(tamanho == indice)
    {
        return;
    }

    int N;

    scanf("%d", &N);

    array[indice] = N;

    ler_array(array, tamanho, indice + 1);
}

int vezes(int array[], int tamanho, int indice, int X)
{
    
    if(tamanho == indice)
    {
        return 0;
    }

    if(array[indice] == X)
    {
        return 1 + vezes(array, tamanho, indice +1, X);
    }
   
    return vezes(array, tamanho, indice + 1, X);
}

int main()
{
    
    int array [10];

    ler_array(array, 10, 0);

    int X;

    scanf("%d", &X);

    int guardar = vezes(array, 10, 0, X);

    printf("%d", guardar);
    
    return 0;
}