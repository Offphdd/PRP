/* 7. Fa�a um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e
mostre:
a) a idade dessa pessoa;
b) quantos anos essa pessoa ter� em 2050 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int nasc, atual, idade, idade2050;

    printf("\nDigite o ano que voc� nasceu: ");
    scanf("%d", &nasc);

    printf("\nDigite o ano atual: ");
    scanf("%d", &atual);

    idade = atual - nasc;
    idade2050 = 2050 - nasc;

    printf("\nSua idade � %d anos", idade);
    printf("\nEm 2050, voc� ter� %d anos\n", idade2050);
}
