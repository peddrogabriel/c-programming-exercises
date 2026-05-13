// This program calculates the weighted average between two grades.
// Author: Pedro Gabriel

#include <stdio.h>
int main()
{
    double A,B;

    printf("Informe duas notas e veja sua media:");
    scanf("%lf%lf",&A, &B);

    double calculo =((A*3.5)+(B*7.5))/11;

    printf("MEDIA = %.5f", calculo);


    return 0;
}