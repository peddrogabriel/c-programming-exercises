// This program generates a matrix filled with sequential numbers and prints it in a formatted layout.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    int X, Y;

    scanf("%d %d", &X, &Y);

    int linhas = Y / X;

    int matriz[linhas][X];

    int numero = 1;

    int i, j;

    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < X; j++)
        {
            matriz[i][j] = numero;
            numero++;
        }
    }

    for(i = 0; i < linhas; i++)
    {
        for(j = 0; j < X; j++)
        {
            if(j == X - 1)
            {
                printf("%d", matriz[i][j]);
            }
            else
            {
                printf("%d ", matriz[i][j]);
            }
        }

        printf("\n");
    }

    return 0;
}
  