// This program calculates a recursive mathematical series involving factorials and prime numbers.
// Author: Pedro Gabriel

#include <stdio.h>

long long fatorial(int n);
int primo(int n, int i);
int proximo_primo(int y);

double calcular(int n,int i, double soma)
{
    if(i>n)
    {
        return soma;
    }

    long long fato= fatorial(i);
    long long div;
    
    if (i == 1)
    {
        div = 1;
    }

    else
    {
        div = proximo_primo(i);
    }
    
    if(i < n)
        printf("%d!/%lld + ", i, div);
    else
        printf("%d!/%lld\n", i, div);

     soma+= (double) fato/div;

     return calcular(n, i + 1, soma);

}


int primo (int n, int i)
{
    if(n<2)
    {
        return 0;
    }
    
    if(i==1)
    {
        return 1;
    }

    if(n % i==0)
    {
        return 0;
    }
      
    return primo(n,i-1);

}

int proximo_primo(int y)
{
   
    if (y < 2)
    {
        return proximo_primo(2); 
    }

    if (primo(y, y - 1))
    {
        return y;
    }

    return proximo_primo(y + 1);
}
    
long long fatorial(int n)
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

int main()
{
    int n;
    scanf("%d", &n);

    double resultado = calcular(n,1,0);

    printf("%.2f\n", resultado);


    return 0;
}