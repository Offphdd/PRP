/* 1. O cardápio de uma lanchonete é o seguinte:
Especificação Preço unitário
100 Cachorro quente R$3,50
101 Bauru simples R$4,00
102 Bauru c/ovo R$4,50
103 Hamburger R$4,00
104 Cheeseburger R$3,00
Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago
por aquele lanche. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int codigo, quantidade;
   float total;

   printf("Especificacao \t  Preco unitario"
          "\n 100 Cachorro quente R$3,50"
          "\n 101 Bauru simples   R$4,00"
          "\n 102 Bauru c/ovo     R$4,50"
          "\n 103 Hamburger       R$4,00"
          "\n 104 Cheeseburger    R$3,00"
          "\n Digite o codigo do lanche: \n");
   scanf("%d", &codigo);

   printf("\nDigite a quantidade desejada: ");
   scanf("%d", &quantidade);
   switch(codigo) {
   case 100:
       total = quantidade * 3.50;
       break;
    case 101:
       total = quantidade * 4.00;
       break;
    case 102:
       total = quantidade * 4.50;
       break;
    case 103:
       total = quantidade * 4.00;
       break;
    case 104:
       total = quantidade * 3.00;
    default:
        printf("Digite um codigo valido");
   }
   printf("Total a pagar: %.2f", total);
}
