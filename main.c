/* 1. Fa�a um programa que receba o sal�rio-base de um funcion�rio. Uma fun��o com retorno
dever� calcular o sal�rio a receber sabendo-se que esse funcion�rio tem gratifica��o de 5% sobre o
sal�rio-base e paga imposto de 7% sobre o sal�rio-base. */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float media(float nota1, float nota2, float nota3);

int main(){
    setlocale(LC_ALL, "Portuguese");

float n1, n2, n3, R;

printf("Digite a primeira nota: \n");
scanf("%f", &n1);
printf("Digite a segunda nota: \n");
scanf("%f", &n2);
printf("Digite a terceira nota: \n");
scanf("%f", &n3);

//CHAMADA DA FUN��O
R = media(n1, n2, n3);

//SA�DA DE DADOS
printf("A m�dia �: %.1f", R);

}

float media(float nota1, float nota2, float nota3){
    float media;
    media = (nota1 + nota2 + nota3) / 3;

}
