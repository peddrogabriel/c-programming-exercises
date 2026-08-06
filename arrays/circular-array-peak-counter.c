// This program counts local peaks in a circular array using recursion.
// Author: Pedro Gabriel

#include <stdio.h>

void ler_array(int array[], int tamanho, int indice)
{
    if(tamanho == indice)
    {
        return;
    }

    int indice2;
    
    scanf("%d", &indice2);

    array[indice] = indice2;

    return ler_array(array, tamanho, indice + 1);
}

int alunos_isolados(int array[], int tamanho, int indice)
{
    if(tamanho == indice)
    {
        return 0;
    }

    int antecessor;

    int sucessor;

    if(indice == 0)
    {
        antecessor = array[tamanho -1];

        sucessor = array[indice + 1];
    }

    else if(indice == tamanho - 1)
    {
        antecessor = array[indice -1];

        sucessor = array[0];
    }

    else
    {
        antecessor = array[indice - 1];

        sucessor = array[indice + 1];
    }

    if(array[indice] > antecessor && array[indice] > sucessor)
    {
        return 1 + alunos_isolados(array, tamanho, indice + 1);
    }
    
    return alunos_isolados(array, tamanho, indice + 1);
}

int main()
{
    int indice;

    scanf("%d", &indice);

    int array[indice];

    ler_array(array, indice, 0);

    int guardar_isolados = alunos_isolados(array, indice, 0);

    printf("%d", guardar_isolados);

    return 0;
}