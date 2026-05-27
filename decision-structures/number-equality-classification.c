// This program reads three integers and classifies them according to their equality.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Digite 3 numeros inteiros:");
    scanf("%d%d%d", &a, &b, &c);

    if(a==b && b==c)
    {
        printf("1");
    }

    if(a!=b && b!=c && c!=a)
    {
        printf("2");
    }

    if(a==b && b!=c)
    {
        printf("3");
    }

    if(a==c && c!=b)
    {
        printf("3");
    }

    if(b==c && c!=a)
    {
        printf("3");
    }


    return 0;
}