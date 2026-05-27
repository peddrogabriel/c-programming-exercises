// This program simulates recursive battles between Bezaliel and Clodes and determines the winner.
// Author: Pedro Gabriel

#include <stdio.h>

int calcular (int V1, int V2, int D1, int D2)
{
     
    int turnos_bezaliel = (V1 + D2 - 1) / D2;
    int turnos_clodes = (V2 + D1 - 1) / D1;

    
    if (turnos_clodes <= turnos_bezaliel)
    {
        return 1;
    }

    D1 += 50;
    V1 -= D2;

    if (V1 <= 0)
    {
        return 2;
    }

    return calcular(V1, V2, D1, D2);
}


void batalha(int N)
{
    if(N == 0)
        return;

    int V1, V2, D1, D2;

    scanf("%d %d %d %d", &V1, &V2, &D1, &D2);

    int resultado = calcular(V1, V2, D1, D2);

    if(resultado == 1)
        printf("Clodes\n");
    else
        printf("Bezaliel\n");

    batalha(N - 1);
}



int main()
{
    int N;
    scanf("%d", &N);
    
    batalha(N);

    return 0;
}