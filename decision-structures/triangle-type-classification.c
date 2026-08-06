// This program classifies a triangle as equilateral, isosceles, or scalene based on its side lengths.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    double A,B,C;

    scanf("%lf%lf%lf", &A, &B, &C);

    if(A==B && C==B)
    {
        printf("equilatero");
    }

    if(A!=B && A!=C && C!=B)
    {
        printf("escaleno");
    }

    if(A==B && A!=C)
    {
        printf("isosceles");
    }

    if(A==C && C!=B)
    {
        printf("isosceles");
    }

    if(B==C && C!=A)
    {
        printf("isosceles");
    }

    return 0;
}
  