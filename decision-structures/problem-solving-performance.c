// This program calculates the percentage of solved problems and classifies the performance.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    double problemas_prof, problemas_resol;

    scanf("%lf", &problemas_prof);

    scanf("%lf", &problemas_resol);

    double calculo= (problemas_resol/problemas_prof)*100.0;

    if(calculo>=0 && calculo<20)
    {
        printf("%.2lf%% 4.40%% Pessimo",calculo);
    }

    else if(calculo>=20 && calculo<40)
    {
        printf("%.2lf%% 31.65%% Ruim",calculo);
    }

    else if(calculo>=40 && calculo<60)
    {
        printf("%.2lf%% 56.82%% Bom",calculo);
    }

    else if(calculo>=60 && calculo<80)
    {
        printf("%.2lf%% 80.00%% Muito Bom",calculo);
    }

    else if(calculo>=80 && calculo<=100)
    {
        printf("%.2lf%% 94.00%% Excelente",calculo);
    }

    return 0;
}