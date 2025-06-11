#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define L 3 //define a constante da linha
#define C 2  //define a constante da coluna

int somaMatriz(int MAT[L][C]);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int M[L][C], i, j, R; //entrada de dados
    float media;

    for(i=0; i<L; i++) {  //for das linhas
        for(j=0; j<C; j++) {  //for das colunas
            printf("\nDigite o valor para M[%d][%d]", i, j);
            scanf("%d", &M[i][j]);
        }
    }
        R = somaMatriz(M); //chama da função COM retorno
        printf("\nA soma da matriz é: %d", R);
        media = R / (L * C);
        printf("\nA média da matriz é: %.2f", media);
}

int somaMatriz(int MAT[L][C]) {
    int i, j, soma = 0;

    for(i=0; i<L; i++) {
        for(j=0; j<C; j++) {
            soma = soma + MAT[i][j];

    }
        }
        return soma;
}
