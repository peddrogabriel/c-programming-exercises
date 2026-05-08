// This program prints the multiples of a number within a given interval using recursion.
// Author: Pedro Gabriel

#include <stdio.h>

int imprimir(int A, int B, int N)
{
    if(A>B)
    {
        return 0;
    }

    int cont = 0;

    if (A%N==0)
    {

        printf("%d ", A);
        cont=1;
    }

    return imprimir (A+1,B,N) + cont;
                
}

void le()
{
    int A;
    int B;
    int N;

    scanf("%d", &N);
    scanf("%d", &A);
    scanf("%d", &B);
    
   int resultado =  imprimir(A,B,N);

   if(resultado==0)
   {
        printf("INEXISTENTE");
   }
}



int main()
{
   le();

   return 0;
}