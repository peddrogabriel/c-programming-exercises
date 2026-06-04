// This program calculates an employee's new salary based on percentage increases.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    double salario;

    printf("Digite seu salario atual e veja o novo salario com aumento:");
    scanf("%lf", &salario);

    if(salario>500)
    {
        double novo_salario= (salario*0.10) + salario;

        printf("%.2lf", novo_salario);
    }

    
    if (salario>300 && salario<=500)
    {
        double novo_salario2= (salario*0.07) + salario;

        printf("%.2lf", novo_salario2);
    }

    else if (salario<=300)
    {
        double novo_salario3 = (salario*0.05) + salario;

        printf("%.2lf", novo_salario3);

    }

    

    return 0;
}

