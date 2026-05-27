// This program evaluates student answers, calculates grades, approval statistics, and grade frequency using recursion.
// Author: Pedro Gabriel

#include <stdio.h>

int corrigir(char gabarito[], char respostas[], int tamanho, int indice)
{
    if(tamanho == indice)
    {
        return 0;
    }

    if(gabarito[indice] == respostas[indice])
    {
        return 1 + corrigir(gabarito, respostas, tamanho, indice +1);
    }

    return corrigir(gabarito, respostas, tamanho, indice +1);
}

void matricula(char gabarito[], int total, int aprovados, int frequencia[])
{
    int matriculas;

    scanf("%d", &matriculas);

    if(matriculas == 9999)
    {
        double porcentagem = (aprovados * 100.0) / total;

        printf("%.1lf%%\n", porcentagem);

        int guardar = calcula_frequencia(frequencia, 11, 0);

        printf("%.1lf\n", (double) guardar);

        return;
    }
    
    total++;

    char respostas[11];

    scanf("%s", respostas);

    int nota = corrigir(gabarito, respostas, 10, 0);

    frequencia[nota]++;

    if(nota >= 6)
    {
        aprovados++;
    }

    printf("%d %.1lf\n", matriculas, (double) nota);

    matricula(gabarito, total, aprovados, frequencia);

}

int calcula_frequencia(int frequencia[], int tamanho, int indice)
{
    if(tamanho == indice)
    {
        return 0;
    }

    int maior = calcula_frequencia(frequencia, 11, indice + 1);
    
    if(frequencia[maior] < frequencia[indice])
    {
        return indice;
    }

    return maior;
}

int main()
{
    int total = 0;

    int aprovados = 0;

    char gabarito[11];

    int frequencia[11] = {0};

    scanf("%s", gabarito);

    matricula(gabarito, total, aprovados, frequencia);

    return 0;
}