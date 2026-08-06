// This program counts groups of consecutive available seats in a seating matrix.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{

int i,j;

int X,F,C;
scanf("%d %d %d", &X, &F, &C);

int cont_livre = 0;
int fileira_livres = 0;

int matriz[F][C];

for(i = 0; i < F; i++)
{
    for(j = 0; j < C ;j++)
    {
        scanf("%d", &matriz[i][j]);
    }
}
    
for(i = 0; i < F; i++)
{
    for(j = 0; j < C ;j++)
    {
        if(matriz[i][j] == 0)
        {
            cont_livre++;
        }

        if(matriz[i][j] == 1)
        {
            cont_livre = 0;
        }

        if(cont_livre == X)
        {
            fileira_livres++;

            cont_livre = 0;
        }

          
    }
    cont_livre = 0;
}

printf("%d", fileira_livres);

    return 0;
}