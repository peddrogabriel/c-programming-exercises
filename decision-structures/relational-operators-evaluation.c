// This program evaluates relational operators between two integers and prints the corresponding results.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    int A,B;

    scanf("%d%d", &A, &B);

    if(A>B)
    {
        printf("1\n");
    }
    
    else
    {
        printf("0\n");
    }

    if(A==B)
    {
        printf("1\n");
    }

    else
    {
        printf("0\n");
    }

    if(A<B)
    {
        printf("1\n");
    }

    else
    {
        printf("0\n");
    }

    if(A!=B)
    {
        printf("1\n");
    }
    
    else
    {
        printf("0\n");
    }

    if(A>=B)
    {
        printf("1\n");
    }

    else
    {
        printf("0\n");
    }

    if(A<=B)
    {
        printf("1\n");
    }

    else
    {
        printf("0\n");
    }


    return 0;
}

