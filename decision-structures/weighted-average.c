// Este programa le tres numeros e imprime a media ponderada entre eles.
// Criador: Pedro Gabriel
// Data: 09/03/26

#include <stdio.h>

int main()

{
   float a,b,c;

   printf("Informe os valores : \n");
   scanf("%f%f%f",&a, &b, &c); 
 

   float media= (a*2)+(b*3)+(c*5);
   float media_p= 10;
   float media_pond= media/media_p;

   printf("MEDIA = %.1f \n", media_pond);

    return 0;
}