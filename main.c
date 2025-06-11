#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define L 3 //define a constante da linha
#define C 2  //define a constante da coluna

void somaMatriz(int MAT[L][C]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int M[L][C], i, j; //entrada de dados

    for(i=0; i<L; i++) {  //for das linhas
        for(j=0; j<C; j++) {  //for das colunas
            printf("\nDigite o valor para M[%d][%d]", i, j);
            scanf("%d", &M[i][j]);
        }
    }
        somaMatriz(M);
}

void somaMatriz(int MAT[L][C]) {
    int i, j, soma = 0;

    for(i=0; i<L; i++) {
        for(j=0; j<C; j++) {
            soma = soma + MAT[i][j];
    }
        }
    printf("\nA soma da matriz é: %d", soma);
            }
