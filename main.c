/*
Ex 4 SLIDES
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int func_quantidade(int VET[]);
void func_soma(int VET[]);

int main()
{
 int V[MAX], x, R;

 for(x=0; x<MAX; x++) {
    printf("\nDigite o valor para V[%d]: ", x);
    scanf("%d", &V[x]);
 }

 R = func_quantidade(V); //funcao com retorno
 func_soma(V); //funcao sem retorno
 // printf("\nQuantidade de numeros negativos = %d\n", R);
}

int func_quantidade(int VET[]){ //variavel do vetor + nome alterado do vetor + [] ou [MAX]
    int cont = 0, x;//contador inciciando em 0

    for(x=0; x<MAX; x++) { //percorre o vetor
            if(VET[x]<0) //se numero for negativo
            cont++; //conta +1
}
    return cont; //retorna o valor para a var R
}
void func_soma(int VET[]){ //funcao sem retorno
    int soma = 0, x; //acumulador sempre inicializa em 0

    for(x=0; x<MAX; x++) { //percorre o vetor
            if(VET[x]>0) // se o elemento for positivo
                soma = soma + VET[x]; //soma dos elementos positivos
    }
printf("\nA soma dos numeros positivos e: %d\n", soma);
}
