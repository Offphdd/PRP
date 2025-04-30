/* Faça um algoritmo que receba um número, calcule e mostre
tabuada desse número */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tab(int num);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("\n Digite o número desejado: \n");
    scanf("%d", &num);

    tab(num);
}
void tab(int n){
    int x, R;
    for(x=1; x<=10; x++){
        R = x * n;
        printf("\n%d * %d = %d", x, n, R);
}
    }

