// This program calculates a water bill based on consumption tiers.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    int n;
    int acumulador=0;

    printf("Informe o valor da conta de agua:");
    scanf("%d", &n);

    if(n<=10 && n>0)
    {
        printf("7");
    }

    if(n>10 && n<=30)
    {
        int sobra= n-10;
        int a= sobra*1;

        acumulador += a;
        acumulador += 7;

        printf("%d", acumulador);

    }

    if (n>=31 && n<=100)
    {
        int sobra2= (n-10)-20;
        int b= sobra2*2;

        acumulador +=b;
        acumulador += 20;
        acumulador +=7;

        printf("%d", acumulador);

    }

    if(n>100)
    {
        int sobra3= ((n-10)-20)-70;
        int c= sobra3*5;

        acumulador += c;
        acumulador += 20;
        acumulador += 7;
        acumulador += 70*2;

        printf("%d", acumulador);
    }


    return 0;
}