// This program reads three numbers and displays the smallest one.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Digite 3 numeros e veja o menor:\n");
    scanf("%d%d%d", &a, &b, &c);

    int menor_num = a;

    if (menor_num > b)
    {
        menor_num = b;
    }

    if (menor_num > c)
    {
        menor_num=c;

    }

    printf("%d", menor_num);

    return 0;
}