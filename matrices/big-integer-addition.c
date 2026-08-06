// This program adds two arbitrarily large integers using matrix-based digit storage.
// Author: Pedro Gabriel

#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char N[10005];
    char M[10005];
   
    fgets(N, 10005, stdin);
    fgets(M, 10005, stdin);

    N[strcspn(N, "\n")] = '\0';
    M[strcspn(M, "\n")] = '\0';

    int tamanho1 = strlen(N);
    int tamanho2 = strlen(M);
    int matriz[1][10005] = {0};
    int matriz2[1][10005] = {0};
    int matriz3[1][10006] = {0};

    for(i = 0; i < tamanho1; i++)
    {
       
        matriz[0][i] = N[(tamanho1 - 1) - i] - '0';

    }

    for(i = 0; i < tamanho2; i++)
    {
       
        matriz2[0][i] = M[(tamanho2 - 1) - i] - '0';

    }

    int maior_tamanho;

    if(tamanho1 < tamanho2)
    {
        maior_tamanho = tamanho2;
    }

    else
    {
        maior_tamanho = tamanho1;
    }

    int vai_um = 0;
    

    for(i = 0; i < maior_tamanho; i++)
    {
        int soma =  matriz[0][i] + matriz2[0][i] + vai_um;

        matriz3[0][i] = soma % 10;

        vai_um = soma / 10;
    }

    if(vai_um > 0)
    {
        matriz3[0][maior_tamanho] = vai_um;
        maior_tamanho++;
    }

    for(i = maior_tamanho - 1; i >= 0; i--)
    {
        printf("%d", matriz3[0][i]);
    }


    return 0;
}