#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("Digite um numero: \n");
    scanf("%d", &n);

if(n > 0)
    printf("O numero e positivo");
    else if(n<0)
        printf("O numero e negativo");
        else
            printf("O numero e zero");

    return 0;
}
