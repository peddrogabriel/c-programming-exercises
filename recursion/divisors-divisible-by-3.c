// Este programa imprime a quantidade de divisores de um numero que são divisiveis por 3.
// Criador: Pedro Gabriel
// Data: 23/04/26

#include <stdio.h>

int divisivel(int N, int M)
{
    if(M==0)
    {
        return 0;
    }

    else
    {
        int cont=0;
    
        if(N%M==0 && M%3==0)
        {
            cont++;
        }

        return cont + divisivel(N,M-1);
    }
}

void imprimir()
{
    int N;
    
    printf("Digite um valor inteiro:");
    scanf("%d", &N);

    int M=N;

    if(divisivel(N,M)==0)
    {
        printf("O numero nao possui divisores multiplos de 3!");
    }

    else
    {
        printf("%d", divisivel(N,M));
    }

}

int main()
{

  imprimir();  

  return 0;
}