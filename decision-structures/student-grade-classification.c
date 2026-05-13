// This program reads three grades, calculates the average, and determines the student's academic status.
// Author: Pedro Gabriel

#include <stdio.h>

int main()
{
    int nota1;
    int nota2;
    int nota3;



    printf("Digite sua primeira nota:\n");
    scanf("%d", &nota1);


    printf("Digite sua segunda nota:\n");
    scanf("%d", &nota2);

    printf("Digite sua terceira nota:\n");
    scanf("%d", &nota3);

    double media= (nota1+nota2+nota3)/3.0;

    if (media>=70 && media<=100)
    {
       printf("A media do aluno foi %.2lf e ele foi APROVADO", media); 
    }
    
    
    if (media>0 && media<=40)
    {
       printf("A media do aluno foi %.2lf e ele foi REPROVADO", media); 
    }

    if (media>40 && media<=70)
    {
       printf("A media do aluno foi %.2lf e ele foi FINAL", media); 
    }

    if (media>100 || media<0)
    {
        printf("Media invalida");
    }

    return 0;
}