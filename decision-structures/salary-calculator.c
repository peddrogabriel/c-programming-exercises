// This program calculates an employee's salary based on worked hours and hourly wage.
// Author: Pedro Gabriel.

#include <stdio.h>

int main()
{
    int numero_funci;
    int horas;
    float valor;
    
    printf("Seu numero de funcionario:");
    scanf("%d",&numero_funci);

    printf("Seu numero de horas trabalhadas:");
    scanf("%d",&horas);

    printf("Valor que recebe por hora trabalhada:");
    scanf("%f",&valor);

    float salario= horas*valor;


    printf("NUMBER = %d \n",numero_funci);
    printf("SALARY = R$ %.2f \n",salario);

    return 0;
}