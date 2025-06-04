/* 1. Crie um programa que leia 10 n�meros reais na fun��o principal e armazene-os em um vetor. Um fun��o
sem retorno dever� mostrar os valores armazenados nas posi��es pares do vetor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 10

void func_pares(float VET[]); // fun��o sem retorno

int main() {

    setlocale(LC_ALL, "Portuguese");

    float V[MAX];
    int x;

    for(x = 0; x < MAX; x++) {
        printf("\nDigite o valor real para V[%d]: ", x);
        scanf("%f", &V[x]);
    }

    func_pares(V); // fun��o sem retorno para mostrar posi��es pares
}

void func_pares(float VET[]) {
    int x;
    printf("\nValores armazenados nas posi��es pares do vetor:\n");
    for(x = 0; x < MAX; x += 2) {
        printf("Posi��o %d: %.2f\n", x, VET[x]);
    }
}
