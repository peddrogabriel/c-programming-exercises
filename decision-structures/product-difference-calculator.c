// This program calculates the difference between the product of A and B and the product of C and D.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    int A,B,C,D;
    
    printf("informe 4 valores:");
    scanf("%d%d%d%d", &A, &B, &C, &D);

    int calculo= (A*B)-(C*D);

    printf("DIFERENCA = %d", calculo);

    return 0;
}