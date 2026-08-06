// This program sorts an array using recursive Bubble Sort and displays the elements in a custom order.
// Author: Pedro Gabriel

#include <stdio.h>

void ler_array(double array[], int tamanho, int indice)
{
    if(indice == tamanho)
    {
        return;
    }

    double numero;

    scanf("%lf", &numero);

    array[indice] = numero;

    ler_array(array, tamanho, indice+1);

}

void ordenar(double array[], int tamanho, int indice)
{
    if(indice > tamanho - 2)
    {
        return;
    }

    if(array[indice] > array[indice + 1])
    {
        double aux = array[indice];
        array[indice] = array[indice + 1];
        array[indice + 1] = aux;
    }

    ordenar(array, tamanho, indice + 1);
}

void bubble_sort(double array[], int tamanho, int indice)
{
     if(indice < tamanho - 1)
    {
        ordenar(array, tamanho, 0);
        
        bubble_sort(array, tamanho, indice + 1);
    }
}

void imprimir(double array[], int tamanho, int indice)
{
    if(indice == tamanho)
    {
        return;
    }

    printf("%.2lf\n", array[0]);
    printf("%.2lf\n", array[2]);
    printf("%.2lf\n", array[3]);
    printf("%.2lf\n", array[1]);

    return;
}

int main()
{
    
    double array[4];

    ler_array(array, 4, 0);

    bubble_sort(array, 4, 0);

    imprimir(array, 4, 0 );

    return 0;
}