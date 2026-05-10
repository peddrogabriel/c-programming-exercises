// This program calculates the greatest common divisor (GCD) of two numbers using recursion.
// Author: Pedro Gabriel

#include <stdio.h>

int mdc(int a, int b)
{
    if(b==0)
    {
        return a;
    }

    else
    {
        return mdc(b, a%b);
    }

}

int main()
{
    int numero1,numero2;

    printf("Digite o primeiro numero:");
    scanf("%d", &numero1);

    printf("Digite o segundo numero:");
    scanf("%d", &numero2);

    mdc(numero1, numero2);

    printf("%d", mdc(numero1,numero2));

    return 0;
}