// This program calculates Fibonacci numbers using recursion and memoization.
// Author: Pedro Gabriel

#include <stdio.h>

long long int calcular_fib(long long int array[], int tamanho, int indice)
{
    
    if(indice == 0)
    {
        return 0;
    }

    if(indice == 1)
    {
        return 1;
    }

    if(array[indice] != 0)
    {
        return array[indice];
    }

    return array[indice] = calcular_fib(array, tamanho, indice - 1) + calcular_fib(array, tamanho, indice- 2);

}

int main()
{

    int indice;

    scanf("%d", &indice);

    long long int array[101] = {0};

    long long int guardar_fib = calcular_fib( array, 101, indice);

    printf("%lld", guardar_fib);

    return 0;
}