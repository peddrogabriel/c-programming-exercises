// This program analyzes weekly programming productivity using recursion.
// Author: Pedro Gabriel


#include <stdio.h>

void imprime_dia (int dia){
    if (dia == 1) printf ("DOMINGO");
    else if (dia == 2) printf ("SEGUNDA");
    else if (dia == 3) printf ("TERCA");
    else if (dia == 4) printf ("QUARTA");
    else if (dia == 5) printf ("QUINTA");
    else if (dia == 6) printf ("SEXTA");
    else printf("SABADO");
}

void processar (int dia, int cont_prog, int cont_linhas, int max_linhas, int dia_max){

    if (dia > 7)
    {
        printf ("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", cont_prog);
        printf ("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", cont_linhas);
        printf ("DIA QUE MAIS PRODUZIU: ");
        imprime_dia(dia_max);
        printf("\n");
        return;
    }

    int prog, linhas;
    scanf ("%d %d", &prog, &linhas);

    if (prog >= 5)
    {
        cont_prog++;
    }

    if (linhas >= 100)
    {
        cont_linhas++;
    }

    if (linhas >= max_linhas)
    {
        max_linhas = linhas;
        dia_max = dia;
    }

    processar (dia + 1, cont_prog, cont_linhas, max_linhas, dia_max);
}


int main (){
    processar(1, 0, 0, 0, 1);
    return 0;
}