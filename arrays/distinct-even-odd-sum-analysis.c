// This program counts even and odd numbers in an array, calculates the sum of distinct values, and determines the largest sum.
// Author: Pedro Gabriel
#include <stdio.h>

void ler_array(int array[], int tamanho, int indice)
{
    if(tamanho == indice)
    {
        return;
    }

    int numeros;

    scanf("%d", &numeros);

    array[indice] = numeros;

    ler_array(array, tamanho, indice + 1);
}

int pares(int array[], int tamanho, int indice)
{
    
    if(tamanho == indice)
    {
        return 0;
    }

    if(array[indice] % 2 == 0)
    {
        return 1 + pares(array, tamanho, indice + 1);
    }

   return pares(array, tamanho, indice + 1);
}

int impares(int array[], int tamanho, int indice)
{
    
    if(tamanho == indice)
    {
        return 0;
    }

    if(array[indice] % 2 != 0)
    {
        return 1 + impares(array, tamanho, indice + 1);
    }

   return impares(array, tamanho, indice + 1);
}

int soma_pares(int array[], int tamanho, int indice, int aparecer[])
{
    if(tamanho == indice)
    {
        return 0;
    }

    if(array[indice] % 2 == 0 && aparecer[array[indice]] == 0)
    {
        aparecer[array[indice]] = 1;

        return array[indice] + soma_pares(array, tamanho, indice + 1, aparecer);
    }

    return soma_pares(array, tamanho, indice + 1, aparecer);
}

int soma_impares(int array[], int tamanho, int indice, int aparecer[])
{
    if(tamanho == indice)
    {
        return 0;
    }

    if(array[indice] % 2 != 0 && aparecer[array[indice]] == 0)
    {
        aparecer[array[indice]] = 1;

        return array[indice] + soma_impares(array, tamanho, indice + 1, aparecer);
    }

    return soma_impares(array, tamanho, indice + 1, aparecer);
}

int main()
{
    int N;

    scanf("%d", &N);

    int array[N];

    int aparecer_pares[13001] = {0};

    int aparecer_impares[13001] = {0};

    ler_array(array, N, 0);

    int joao = pares(array, N, 0);

    int maria = impares(array, N, 0);

    int soma_joao = soma_pares(array, N, 0, aparecer_pares);

    int soma_maria = soma_impares(array, N, 0, aparecer_impares);

    int vencedor;

    if(soma_joao > soma_maria)
    {
        vencedor = soma_joao;
    }

    else
    {
        vencedor = soma_maria;
    }

    printf("%d\n", joao);

    printf("%d\n", maria);

    printf("%d\n", vencedor);

    return 0;
}