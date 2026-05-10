// This program repeatedly reads numbers and prints their factorial using recursion until -1 is entered.
// Author: Pedro Gabriel

#include <stdio.h>

int fatorial(int n)
{
    if (n==0)
    {
        return 1;
    }

    else
    {
        return n*fatorial(n-1);
    }
    
}

void le_numero ()
{
    int numero;
    scanf("%d", &numero);

    if(numero==-1)
    {
        return;
    }

    printf("%d\n", fatorial(numero));
    
    le_numero ();

}


int main()
{
   le_numero();

   return 0;
}