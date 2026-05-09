// This program converts a temperature from Fahrenheit to Celsius.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    float fahrein;

    printf("Digite uma temperatura em fahrenheit e veja em celcius:");
    scanf("%f", &fahrein);

    float conversao=(fahrein-32)*(5.0/9);

    printf("%.2f", conversao);


    return 0;
}