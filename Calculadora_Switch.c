#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    int x, y, resultado;


    printf(" \n Digite o valor do primeiro operando: ");
    scanf("%d", &x);
    printf(" \n Digite o valor do segundo operando: ");
    scanf("%d", &y);

    printf(" \n Escolha uma das opcoes abaixo: ");
    printf(" \n +. Soma ");
    printf(" \n -. Subtracao ");
    printf(" \n *. Multiplicacao ");
    printf(" \n /. Divisao ");

    printf(" \n Digite o caractere da opcao desejada: ");
    scanf("%s", &op);

        switch (op)
        {
    case '+':
        printf(" \n Opcao selecionada: 1. Soma ");
        resultado = x + y;
        printf(" \n A soma dos dois numeros e: %d ", resultado);
        break;
    case '-':
        printf(" \n Opcao selecionada: 2. Subtracao ");
        resultado = x - y;
        printf(" \n A subtracao dos dois numeros e: %d ", resultado);
        break;
    case '*':
        printf(" \n Opcao selecionada: 3. Multiplicacao ");
        resultado = x * y;
        printf(" \n A multiplicacao dos dois numeros e: %d ", resultado);
        break;
    case '/':
        printf(" \n Opcao selecionada: 4. Divisao ");
        resultado = x / y;
        printf(" \n A divisao dos dois numeros e: %d ", resultado);
        break;
    default:
        printf( "\n Escolha uma opcao valida");
        }
}
