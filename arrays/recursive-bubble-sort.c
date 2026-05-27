// This program sorts an array using recursive Bubble Sort and displays the smallest and largest values.
// Author: Pedro Gabriel

#include <stdio.h>

void ler_array( int array[], int tamanho, int indice)
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

void ordenar(int array[], int tamanho, int indice)
{
    if(indice > tamanho - 2)
    {
        return;


    }

    if(array[indice] > array[indice + 1])
    {
        int aux = array[indice];
        array[indice] = array[indice + 1];
        array[indice + 1] = aux;
    }

    ordenar(array, tamanho, indice + 1);
}

void bubble_sort(int array[], int tamanho, int indice)
{
     if(indice < tamanho - 1)
    {
        ordenar(array, tamanho, 0);
        
        bubble_sort(array, tamanho, indice + 1);
    }
}

int main()
{   
    
    int array[6];

    ler_array(array, 6, 0);

    bubble_sort(array, 6, 0);

    printf("%d\n",array[0]);

    printf("%d\n",array[5]);
}