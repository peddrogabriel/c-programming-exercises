// This program counts the numbers that are multiples of two given values within a predefined array.
// Author: Pedro Gabriel

#include <stdio.h>

int multiplos(int array[], int tamanho, int indice, int A, int B)
{
    if(indice == tamanho)
    {
        return 0;
    }

    if(array[indice] % A == 0 && array[indice] % B == 0)
    {
       return 1 + multiplos(array, tamanho, indice + 1, A, B);
    }

    else
    {
        
        return multiplos(array, tamanho, indice+1, A, B);    
    }

    
}

void preencher_array(int array[], int tamanho, int indice)
{
    if(indice == tamanho)
    {
        return;
    }

    array[indice] = indice + 1;

    preencher_array(array, tamanho, indice + 1);
}

int main()
{
    int A, B;

    int tamanho= 49;

    scanf("%d%d", &A, &B);

    int array[49];

    preencher_array(array,tamanho, 0);

    int guardar_valor = multiplos(array, tamanho, 0, A,B);

    printf("%d", guardar_valor);

    return 0;
}