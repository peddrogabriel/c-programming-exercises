// This program calculates the roots of a quadratic equation.
// Author: Pedro Gabriel

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;

    printf("Informe 3 numeros e veja as raizes da equacao do 2 grau formadas por eles:");
    scanf("%lf%lf%lf", &a, &b, &c);

    if(a==0)
    {
        printf("NEESG");
    }

    else
    {

    double delta= b*b-4*a*c;

    if(delta<0)
    {
        printf("NRR");
    }

   

    if(delta>0 || delta==0)
    {
        double equacao1= (-b+(sqrt(delta)))/(2.0*a);
        double equacao2= (-b-(sqrt(delta)))/(2.0*a);

        printf("%.2lf\n%.2lf", equacao1, equacao2);

    }

    }
    

    return 0;
}
