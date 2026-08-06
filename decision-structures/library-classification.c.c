// This program classifies a library based on the ratio of books per student.
// Author: Pedro Gabriel

#include <stdio.h>

int main() {
   
    double livros, alunos;

    scanf("%lf%lf", &livros, &alunos);

    double conta= livros/alunos;

    if(conta >= 0.125)
    {
        printf("A");
    }

    if(conta<0.055)
    {
        printf("D");
    }

    if(conta>=0.083 && conta<=0.111)
    {
        printf("B");
    }

     if(conta>=0.0555 && conta<=0.0769)
    {
        printf("C");
    }
    
}
