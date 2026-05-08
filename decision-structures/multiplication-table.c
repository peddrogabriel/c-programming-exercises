// This program prints the multiplication table of a given number.
// Author: Pedro Gabriel.

#include <stdio.h>

int main()
{
   int numero_inteiro;
   
   printf("Informe um numero e veja sua tabuada:");
   scanf("%d", &numero_inteiro);

   printf("%d X 1 = %d \n", numero_inteiro, numero_inteiro*1);
   printf("%d X 2 = %d \n", numero_inteiro, numero_inteiro*2);
   printf("%d X 3 = %d \n", numero_inteiro, numero_inteiro*3);
   printf("%d X 4 = %d \n", numero_inteiro, numero_inteiro*4);
   printf("%d X 5 = %d \n", numero_inteiro, numero_inteiro*5);
   printf("%d X 6 = %d \n", numero_inteiro, numero_inteiro*6);
   printf("%d X 7 = %d \n", numero_inteiro, numero_inteiro*7);
   printf("%d X 8 = %d \n", numero_inteiro, numero_inteiro*8);
   printf("%d X 9 = %d \n", numero_inteiro, numero_inteiro*9);

    return 0;
}