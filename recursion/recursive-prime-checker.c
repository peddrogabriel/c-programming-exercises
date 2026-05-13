// This program continuously reads numbers and checks whether they are prime using recursion until -1 is entered.
// Author: Pedro Gabriel

#include <stdio.h>

int primo (int n, int i)
{
    if(i==1)
    {
        return 1;
    }

    if(n % i==0)
    {
        return 0;
    }

    else
    {
        return primo(n,i-1);
    }
}

int ler(int a)
{
    scanf("%d",&a);

    if(a==-1)
    {
        return 0;
    }
    
    if(a<=1)
    {
        printf("0\n");
    }
    
    else if(primo(a,a-1)==1)
    {
        printf("1\n");
    }

    else
        printf("0\n");

    return ler(a);
}

int main()
{
   
    ler(0);
    return 0;
}