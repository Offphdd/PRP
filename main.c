/* 2. Fa�a um programa que calcule e mostre a �rea de um losango. Para isso, os dados devem
recebidos na fun��o principal e uma fun��o com retorno dever� efetuar o c�lculo. O resultado
dever� ser mostrado na fun��o principal.
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
    printf("\n A �rea do losango �: %.2f", R);
}
float calcula_area(float diagonal_maior, float diagonal_menor) {
    float area;

    area = (diagonal_maior * diagonal_menor) / 2;
    return area;
}
