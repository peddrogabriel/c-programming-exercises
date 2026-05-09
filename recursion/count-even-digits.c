// This program counts how many even digits a number contains using recursion.
// Author: Pedro Gabriel

#include <stdio.h>

int digitos_pares(int numero)
{

    if(numero == 0)
    {
        return 0;
    }

    else
    {
        return (((numero%10)%2==0) + digitos_pares(numero/10));  
    }

    
  
}

int main()
{
    int numero;
    scanf("%d", &numero);

    printf("%d", digitos_pares(numero));


    return 0;
}
