// This program calculates the area of a circle based on a given radius.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    float raio;

    printf("Informe o raio em cm:");
    scanf("%f", &raio);

    float pi= 3.14159;
    float area= (raio*raio)*pi;
    float area_m2= area/10000;

    printf("Area = %.4f", area_m2);

    return 0;
}