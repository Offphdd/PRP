#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*2. 3. Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores a R$
500,00. Fa�a um programa que receba o sal�rio do funcion�rio e mostre o valor do sal�rio
reajustado ou uma mensagem, caso ele n�o tenha direito ao aumento. */

int main()
{
setlocale(LC_ALL, "Portuguese");

    float salario1, salario2;

printf("Informe o sal�rio do funcion�rio: \n");
scanf("%f", &salario1);

    if(salario1<500) {
        salario2 = salario1 + (salario1*0.3);
        printf("O sal�rio reajustado �: %.2f", salario2);
    } else printf("O funcion�rio n�o tem direito ao aumento");
    }
