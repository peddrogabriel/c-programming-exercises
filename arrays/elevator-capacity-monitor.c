// This program monitors elevator occupancy and checks whether the maximum capacity is exceeded.
// Author: Pedro Gabriel

#include <stdio.h>

void ler_array(int saida[], int entrada[], int tamanho, int indice)
{
    if(indice == tamanho)
    {
        return;
    }

   int saiu, entrou;

   scanf("%d%d", &saiu, &entrou);

   saida[indice] = saiu;

   entrada[indice] = entrou;

    ler_array(saida, entrada, tamanho, indice + 1);
}

int elevador(int saida[], int entrada[], int tamanho, int indice, int atual, int capacidade_maxima)
{
    if(indice == tamanho)
    {
        return 0;
    }

    atual = atual - saida[indice] + entrada[indice];

    if(atual > capacidade_maxima)
    {
        return 1;
    }

    else 
    {
        return elevador(saida, entrada, tamanho, indice + 1, atual, capacidade_maxima);
    }

}


int main()
{
     int quantidade_leitura, capacidade_maxima, saiu, entrou;

     scanf("%d%d", &quantidade_leitura, &capacidade_maxima);

     int saida[1000];
     
     int entrada[1000];

     ler_array(saida, entrada, quantidade_leitura, 0);

     int retorno = elevador(saida, entrada, quantidade_leitura, 0,0 ,capacidade_maxima);

     if(retorno == 0)
     {
        printf("N");
     }
     
     else
     {
        printf("S");
     }

    return 0;
}