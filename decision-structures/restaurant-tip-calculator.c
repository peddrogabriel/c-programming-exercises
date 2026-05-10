// This program calculates the final restaurant bill including a 10% tip.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    float valor;

    printf("Digite o valor gasto no restaurante e veja o valor total a ser pago:");
    scanf("%f", &valor);

    float conversao= valor*0.10;
    float valor_final= valor+conversao;

    printf("%.2f", valor_final);

    return 0;
}