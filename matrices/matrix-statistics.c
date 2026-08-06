// This program calculates statistics from a 3x3 matrix, including the average, maximum value, sign indicator, and main diagonal sum.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{

    int matriz[3][3];
    int i,j;
    int soma = 0;
    int delta = 0;
    int maior;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);

            soma += matriz[i][j];

            if(i == 0 && j ==0)
            {
                maior = matriz[i][j];
            }

            if(matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }

            if(maior > 0)
            {
                delta = 1;
            }

            if(maior < 0)
            {
                delta = -1;
            }

        }
    }

    double media = soma / 9.0;

    int soma_diagonal = matriz[0][0] + matriz[1][1] + matriz [2][2];

    printf("%.2lf %d %d %d", media, maior, delta, soma_diagonal);

    return 0;
}