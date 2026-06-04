// This program calculates the available loan amount based on salary commitment limits.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    double salario, valor_comprometido;

    printf("Informe o valor do seu salario:");
    scanf("%lf", &salario);

    printf("Informe o valor comprometido do seu salario:");
    scanf("%lf", &valor_comprometido);

    double porcentagem= salario*0.30;

    if(valor_comprometido>porcentagem)
    {
        printf("0.00");
    }

    if(valor_comprometido<porcentagem)
    {
        double calculo= porcentagem-valor_comprometido;

        printf("%.2lf", calculo);
    }

    return 0;
}