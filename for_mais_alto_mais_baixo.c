/* 5 - Faça um programa que leia dez conjuntos de dois valores, o
primeiro representando o número do aluno e o segundo
representando a sua altura em centímetros. Encontre o aluno mais
alto e o mais baixo. Mostre o número do aluno mais alto e o número
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
        printf("\nInforme a matrícula do aluno: \n");
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
    printf("\nO aluno mais alto é %d, com %.2f de altura", matr_alto, mais_alto);
            printf("\nO aluno mais baixo é %d, com %.2f de altura", matr_baixo, mais_baixo);
}

