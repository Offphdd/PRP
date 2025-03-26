#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*2. Faça um programa que receba quatro notas, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7 */

int main()
{
setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, n4, media;

        printf("Digite a nota 1 \n");
    scanf("%f", &n1);
        printf("Digite a nota 2 \n");
    scanf("%f", &n2);
        printf("Digite a nota 3 \n");
    scanf("%f", &n3);
        printf("Digite a nota 4 \n");
    scanf("%f", &n4);

media = (n1 + n2 + n3 + n4) / 4;

    if(media >= 7)
        printf("APROVADO com média %.2f", media);
    else
        printf("REPROVADO com média %.2f", media);

    return 0;
}
