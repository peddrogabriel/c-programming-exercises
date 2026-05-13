// This program calculates a number in a recursive sequence based on custom rules.
// Author: Pedro Gabriel

#include <stdio.h>

int calculo(int N, int T)
{

    if(T==0)
    {
        return N;
    }

    else
    {
        
        int anterior= calculo(N,T-1);

        if(T%2==0)
        {
            return anterior+(anterior%5);
        }

        else
        {
           return anterior+3;
        }
        
    }   

}


int main()
{ 
    int N, T;

    printf("Digite o N:");
    scanf("%d", &N);

    printf("Digite o T:");
    scanf("%d", &T);

    printf("%d", calculo(N,T));


    return 0;
}