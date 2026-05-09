// This program calculates the factorial of a number using recursion.
// Author: Pedro Gabriel

#include <stdio.h>

int fatorial(int n1)
{
    if(n1==1 || n1==0)
    {
    return 1;
    }

    else
        return n1*fatorial(n1-1);

}

int main()
{
    int n1;
    scanf("%d", &n1);

    printf("%d",fatorial(n1));

    return 0;

}