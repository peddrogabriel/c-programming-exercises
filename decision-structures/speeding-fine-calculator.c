// This program calculates traffic fines and penalty points based on a vehicle's speed.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    double velovia, velovei;

    printf("Informe a velocidade da via:\n");
    scanf("%lf", &velovia);

    printf("Informe a velocidade do vei:\n");
    scanf("%lf", &velovei);

    double porcentagem20= (velovia*0.20) + velovia;

    double porcentagem50= (velovia*0.50) + velovia;
    
    if(velovei>porcentagem50)
    {
        printf("574.62\n7");
    }

    if(velovei<=porcentagem20 && velovei>velovia)
    {
        printf("85.13\n4");
    }

    if(velovei>porcentagem20 && velovei<=porcentagem50)
    {
        printf("127.69\n5");
    }

    if(velovia>velovei)
    {
        printf("0.0\n0");
    }

   
    return 0;
}