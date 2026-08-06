// This program calculates the total cost of Christmas items and the amount each person should pay.
// Author: Pedro Gabriel

#include <stdio.h>

void array_pares( int array[], double array2[], int tamanho, int indice)
{
    if(tamanho == indice)
    {
        return;
    }

    int quantidade;

    double preco;

    scanf("%d", &quantidade);

    scanf("%lf", &preco);

    array[indice] = quantidade;

    array2[indice] = preco;

    array_pares(array, array2, tamanho, indice + 1);
}


double calcular(int array_quant[], double array_pre[], int tamanho, int indice)
{
    if(tamanho ==  indice)
    {
        return 0;
    }

    double calculo = array_quant[indice] * array_pre[indice];

    return calculo + calcular(array_quant, array_pre, tamanho, indice + 1);
}

int main()
{
    double arvore, valor_pessoa;

    scanf("%lf", &arvore);

    int array_quan[3];

    double array_preco2[3];

    array_pares(array_quan, array_preco2, 3, 0);

    double somar = calcular(array_quan, array_preco2, 3, 0) + arvore;

    valor_pessoa = somar / 21;
    
    printf("%.2lf\n%.2lf", somar, valor_pessoa);


    return 0;
}
