// This program calculates traffic fines and counts violations using recursive array processing.
// Author: Pedro Gabriel

#include <stdio.h>

int ler_array( int array[], int tamanho, int indice)
{
    if(indice == tamanho)
    {
        return 0;
    }

    int numero;

    scanf("%d", &numero);

    if(numero == 999)
    {
        return 0;
    }

    array[indice] = numero;

    return 1 + ler_array(array, tamanho, indice + 1);

}

int contar_casas(int array[], int tamanho, int indice)
{
    if( indice == tamanho)
    {
        return 0;
    }

    if(array[indice] <= 2)
    {
        return contar_casas(array, tamanho, indice + 1);
    }

    return 1 + contar_casas(array, tamanho, indice + 1);

}

double calcular_multa( int array[], int tamanho, int indice)
{
    if( indice == tamanho)
    {
        return 0;
    }

    int multa = array[indice] - 2;

    double calculo = multa * 12.89;

    if(multa >=1)
    {
        return calculo + calcular_multa( array, tamanho, indice + 1);

    }

    return calcular_multa(array, tamanho, indice + 1);
    
}

int main()
{
    int array[999];

    int tamanho_real = ler_array(array, 999, 0);

    int guardar = contar_casas(array, tamanho_real, 0);

    double guardar2= calcular_multa(array, tamanho_real, 0);

    printf("%.2lf\n", guardar2);
    printf("%d\n", guardar);
    
    return 0;
}