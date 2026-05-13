// This program calculates the total number of donated coffee capsules and how much each teacher can consume.
// Author: Pedro Gabriel

#include <stdio.h>

int calculo(int prof)
{
    if(prof==7)
    {
        return 0;
    }

    else
    {
        int professor, capsulas_prof;
        char capsulas;

        scanf("%d", &professor);
        scanf(" %c", &capsulas);

        if(capsulas=='P' || capsulas=='p')
        {
            capsulas_prof= professor*10;
        
        }

        else if(capsulas=='G' || capsulas=='g')
        {
           capsulas_prof = professor*16;
           
        }

        return capsulas_prof+calculo(prof+1);
        
    }
}


int main()
{
    int prof=0;
    int resultado= calculo(prof);
    int resultado2 = (resultado*2)/7;

    printf("%d\n%d",resultado, resultado2);

    return 0;  
}