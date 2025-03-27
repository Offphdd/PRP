#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*2. 3. Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$
500,00. Faça um programa que receba o salário do funcionário e mostre o valor do salário
reajustado ou uma mensagem, caso ele não tenha direito ao aumento. */

int main()
{
setlocale(LC_ALL, "Portuguese");

    float salario1, salario2;

printf("Informe o salário do funcionário: \n");
scanf("%f", &salario1);

    if(salario1<500) {
        salario2 = salario1 + (salario1*0.3);
        printf("O salário reajustado é: %.2f", salario2);
    } else printf("O funcionário não tem direito ao aumento");
    }
