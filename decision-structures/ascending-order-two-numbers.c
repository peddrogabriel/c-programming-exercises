// This program reads two integers and displays them in ascending order.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    int a,b;

    printf("Digite 2 numeros inteiros e os veja em ordem crescente:");
    scanf("%d%d", &a, &b);

    if(a>b)
    {
        printf("%d %d", b,a);
    }

    if(b>a)
    {
        printf("%d %d", a,b);
    }

    if(a==b)
    {
        printf("%d %d", a,b);
    }



    return 0;
}