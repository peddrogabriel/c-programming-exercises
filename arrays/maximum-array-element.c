// This program reads numbers into an array and finds the maximum element using recursion.
// Author: Pedro Gabriel

#include <stdio.h>

int ler_array(int array[], int tamanho, int indice)
{
    int numero;
    
    scanf("%d", &numero);

    if(numero == 0)
    {
        return 0;
    }

    else if(indice == tamanho)
    {
        return 0;
    }

    array[indice]= numero;

    return 1 + ler_array(array, tamanho, indice + 1);
}


int maior_numero(int array[], int tamanho, int indice)
{
    
    if (indice == tamanho - 1)
    {
        return array[indice];
    }

    int maior = maior_numero(array, tamanho, indice + 1);

    if(maior < array[indice])
    {
        return array[indice];
    }

    else
    {
        return maior;
    }
}

int main()
{
    int array[100];
    
    int retorno_funcao = ler_array(array, 100, 0);

    int maior= maior_numero(array, retorno_funcao, 0);

    printf("%d", maior);

    return 0;
}