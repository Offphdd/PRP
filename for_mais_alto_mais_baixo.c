/* 5 - Fa�a um programa que leia dez conjuntos de dois valores, o
primeiro representando o n�mero do aluno e o segundo
representando a sua altura em cent�metros. Encontre o aluno mais
alto e o mais baixo. Mostre o n�mero do aluno mais alto e o n�mero
do aluno mais baixo. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int matricula, x, matr_baixo, matr_alto;
   float altura, mais_alto=0, mais_baixo=3;

for(x=1; x<=3; x++){
        printf("\nInforme a matr�cula do aluno: \n");
        scanf("%d", &matricula);
        printf("\nInforme a altura do aluno: \n");
        scanf("%f", &altura);

        if(altura > mais_alto){
            mais_alto = altura;
            matr_alto = matricula;
        }
        if(altura < mais_baixo){
            mais_baixo = altura;
            matr_baixo = matricula;
        }
    }
    printf("\nO aluno mais alto � %d, com %.2f de altura", matr_alto, mais_alto);
            printf("\nO aluno mais baixo � %d, com %.2f de altura", matr_baixo, mais_baixo);
}

