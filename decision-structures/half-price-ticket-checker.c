// This program checks whether a person is eligible for a half-price ticket.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    int estudante, idoso;

    printf("Voce eh estudante? (1-sim 0-nao):");
    scanf("%d", &estudante);
    
    printf("Voce eh idoso? (1-sim 0-nao):");
    scanf("%d", &idoso);


    if (estudante==1 || idoso==1)
    {
        printf("1");

    }

    else

        printf("0");
    
return 0;

}  

  