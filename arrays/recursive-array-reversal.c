// This program reads an array and prints its elements in reverse order using recursion.
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

void inverter(int array[], int tamanho,  int indice)
{
    if(tamanho == indice)
    {
        return;
    }

    inverter(array, tamanho, indice + 1);

    printf("%d ",array[indice] );
}

int main()
{
    int N;

    scanf("%d", &N);

    int array[N];

    ler_array(array, N, 0);

    inverter( array, N, 0);

    return 0;
}