// This program counts the number of connected components represented by an array using recursive traversal.
// Author: Pedro Gabriel

#include <stdio.h>

void zerar_visitado(int visitado[], int tamanho, int indice)
{
    if(indice == tamanho)
    {
        return;
    }

    visitado[indice] = 0;

    zerar_visitado(visitado, tamanho, indice + 1);
}

void ler_array(int array[], int tamanho, int indice)
{
    if(indice == tamanho)
    {
        return;
    }

    scanf("%d", &array[indice]);

    ler_array(array, tamanho, indice + 1);
}

void visitar(int array[], int visitado[], int atual)
{
    if(visitado[atual] == 1)
    {
        return;
    }

    visitado[atual] = 1;

    visitar(array, visitado, array[atual]);
}

int contar_tocas(int array[], int visitado[], int tamanho, int indice)
{
    if(indice == tamanho)
    {
        return 0;
    }

    if(visitado[indice] == 0)
    {
        visitar(array, visitado, indice);

        return 1 + contar_tocas(array, visitado, tamanho, indice + 1);
    }

    return contar_tocas(array, visitado, tamanho, indice + 1);
}

int main()
{
    int N;

    scanf("%d", &N);

    int array[N];

    int visitado[N];

    zerar_visitado(visitado, N, 0);

    ler_array(array, N, 0);

    int resultado = contar_tocas(array, visitado, N, 0);

    printf("%d\n", resultado);

    return 0;
}