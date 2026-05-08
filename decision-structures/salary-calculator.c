// Este programa le o número de um funcionário, horas trabalhadas, o valor por hora e calcula o salário desse funcionário. 
// Criador: Pedro Gabriel.
// Data: 11/03/26

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