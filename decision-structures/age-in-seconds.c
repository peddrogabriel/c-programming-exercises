// Este programa le a idade da pessoa e imprime a idade em segundos.
// Criador: Pedro Gabriel
// Data: 10/03/26

#include <stdio.h>

int main()
{
    int idade_vivida;

    printf("Informe sua idade e veja quantos segundos viveu:");
    scanf("%d", &idade_vivida);

   
    int meses_dias= idade_vivida*365;
    int dias_horas= meses_dias*24;
    int horas_minutos= dias_horas*60;
    int minutos_segundos= horas_minutos*60;

    printf("%d", minutos_segundos);

    return 0;
}
