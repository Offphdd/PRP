/* 2. Faça um programa que calcule e mostre a área de um losango. Para isso, os dados devem
recebidos na função principal e uma função com retorno deverá efetuar o cálculo. O resultado
deverá ser mostrado na função principal.
Sabe-se que A = (diagonal maior * diagonal menor)/2 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcula_area(float diagonal_maior, float diagonal_menor);

int main(){
    setlocale(LC_ALL, "Portuguese");

    float d_maior, d_menor, R;
    printf("\nDigite o valor da diagonal maior: ");
    scanf("%f", &d_maior);
    printf("\nDigite o valor da diagonal menor: ");
    scanf("%f", &d_menor);

    R = calcula_area(d_maior, d_menor);
    printf("\n A área do losango é: %.2f", R);
}
float calcula_area(float diagonal_maior, float diagonal_menor) {
    float area;

    area = (diagonal_maior * diagonal_menor) / 2;
    return area;
}
