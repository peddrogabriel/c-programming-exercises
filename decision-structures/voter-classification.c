// This program reads a person's age and determines their electoral classification.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    int idade;

    printf("Informe sua idade:");
    scanf("%d", &idade);

    if (idade<16)
    {
        printf("nao eleitor\n");
    }

    if (idade>=18 && idade<=65)
    {
        printf("eleitor obrigatorio\n");
    }

    if (idade==16 || idade>65)
    {
        printf("eleitor facultativo\n");
    }

    if (idade==17)
    {
        printf("eleitor facultativo\n");
    }


    return 0;
}
