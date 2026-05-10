// This program calculates the GCD of multiple pairs of numbers using the Euclidean algorithm and recursion.
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

void le_casos(int casos)
{   
    int a, b;

    if(casos==0)
    {
        return;
    }

    else
    {
        printf("Digite o primeiro numero:\n");
        scanf("%d", &a);
   

        printf("Digite o segundo numero:\n");
        scanf("%d", &b);    

        printf("MDC(%d,%d) = %d\n", a,b, mdc(a,b));
    }

    le_casos(casos-1);
}


int main()
{
    int casos;

    printf("Digite o numero de casos:\n");
    scanf("%d", &casos);

   le_casos(casos);

    return 0;
}
