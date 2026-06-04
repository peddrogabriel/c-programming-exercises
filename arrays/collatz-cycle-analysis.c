// This program analyzes Collatz cycle lengths within a range and finds the maximum cycle length.
// Author: Pedro Gabriel

#include <stdio.h>

void gerar_array(int array[], int tamanho, int indice, int inicio)
{
    if(indice == tamanho)
    {
        return;
    }

    array[indice] = inicio + indice;

    gerar_array(array, tamanho, indice + 1, inicio);
}

int ciclos(int n)
{
    if(n == 1)
    {
        return 1;
    }

    else if (n % 2 == 0)
    {
        return 1 + ciclos(n / 2);
    }

    else if(n % 2 != 0)
    {
        return 1 + ciclos(3 * n + 1);
    }

}

void array_ciclos (int array[], int guardar[], int tamanho, int indice)
{
    if(indice == tamanho)
    {
        return;
    }

    guardar[indice] = ciclos(array[indice]);

    array_ciclos(array, guardar, tamanho, indice + 1);
}

int maior_numero(int guardar[], int tamanho, int indice)
{
    
    if (indice == tamanho - 1)
    {
        return guardar[indice];
    }

    int maior = maior_numero(guardar, tamanho, indice + 1);

    if(maior < guardar[indice])
    {
        return guardar[indice];
    }

    else
    {
        return maior;
    }
}

void ler_entrada(int i, int j)
{
    
    int leitura = scanf("%d%d", &i, &j);

    if(leitura != 2)
    {
        return;
    }

    int menor = i;
    int maior_inter = j;

    if (i > j)
    {
        int aux = maior_inter;
        maior_inter = menor;
        menor = aux;
    }

    int array [maior_inter - menor + 1];

    int guardar[maior_inter - menor + 1];

    gerar_array(array, maior_inter - menor + 1, 0, menor);

    array_ciclos(array, guardar, maior_inter - menor + 1, 0);

    int maior = maior_numero(guardar, maior_inter - menor + 1, 0);

    printf("%d %d %d\n", i, j, maior);

    ler_entrada(i,j);
}

int main()
{
    ler_entrada(0,0);

    return 0;
}