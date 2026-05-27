// This program evaluates whether cyclists achieved their distance goals using recursion.
// Author: Pedro Gabriel

#include <stdio.h>

double calculo(int X, int variavel)
{
    if(X < variavel)
    {
        return 0;
    }

    else
    {
    
    char C; 

    int idade;

    double distancia_percorrida, meta;

    scanf(" %c", &C);

    scanf("%d", &idade);

    scanf("%lf", &distancia_percorrida);
    
    if(C=='M')
    {
        if(idade>=18 && idade<=29)
        {
            meta=idade*1.4;
        }

        else if(idade>=30 && idade<=49)
        {
            meta=idade*1.2;
        }

        else if(idade>=50)
        {
           meta=idade*1.0;
        }

    }

    else if(C=='F')
    {
        if(idade>=18 && idade<=29)
        {
            meta=idade*1.2;
        }

        else if(idade>=30 && idade<=49)
        {
            meta=idade*1.0;
        }

        else if(idade>=50)
        {
            meta=idade*0.9;
        }
      
    } 
   
    double resultado = meta;

    if(resultado<=distancia_percorrida)
    {
        printf("Ciclista %d: Atingiu a meta\n",variavel);
    }

    else 
    {
        printf("Ciclista %d: Nao atingiu a meta\n",variavel);
    }
}
 return calculo (X, variavel+1);
}

int main()
{   
    int X;

    scanf("%d", &X);

    calculo(X,1);

    return 0;
}