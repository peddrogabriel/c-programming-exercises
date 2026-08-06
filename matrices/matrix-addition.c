// This program adds two square matrices and prints the resulting matrix.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{

    int N, i, j;

    scanf("%d", &N);

    int matriz[N][N];

    int matriz2[N][N];

    int matriz3[N][N];

    if(N == 0)
    {
        printf("Vazia");
    }

    else
    {

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d", &matriz2[i][j]);
        }

    }

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            matriz3[i][j] = matriz[i][j] + matriz2[i][j]; 
            
        }
    }

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d\n", matriz3[i][j]);
        }
    }

    }

return 0;

}