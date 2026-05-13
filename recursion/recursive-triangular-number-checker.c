// This program checks whether a number is triangular using recursion.
// Author: Pedro Gabriel

#include <stdio.h>

int triangular ( int numero, int numero2)
{

    if((numero2)*(numero2+1)*(numero2+2)>numero)
    {   
        return 0;
    }

    else if (((numero2)*(numero2+1)*(numero2+2)==numero))
    {
        return numero2;
    }

    else
    {
        return triangular(numero, numero2+1);
    }

}

void imprimir()
{
    int numero;
    int numero2=1;

    printf("Digite um numero e veja se ele eh triangular:");
    scanf("%d", &numero);

    int resultado= triangular(numero,1);


    if (triangular(numero, numero2)==0)
    {
        printf("Falso");
    }

    else
    {
        printf("%d *%d *%d = %d\nVerdadeiro",resultado,(resultado+1),(resultado+2),(numero));
        
    }
    
}


int main()
{
    imprimir();

    return 0;
}
