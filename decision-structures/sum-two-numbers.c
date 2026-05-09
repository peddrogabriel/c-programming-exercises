// This program reads two integers and prints their sum.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    int A,B;

    printf("Escolha os valores A e B:");
    scanf("%d%d", &A, &B);

    int X= A+B;

    printf("X = %d", X);

    return 0;
}