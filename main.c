#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void media(float nota1, float nota2, float nota3);

int main(){
    setlocale(LC_ALL, "Portuguese");

float n1, n2, n3;

printf("Digite a primeira nota: \n");
scanf("%f", &n1);
printf("Digite a segunda nota: \n");
scanf("%f", &n2);
printf("Digite a terceira nota: \n");
scanf("%f", &n3);

//CHAMADA DA FUN��O SEM RETORNO
media(n1, n2, n3);

}

void media(float nota1, float nota2, float nota3){
    float media;
    media = (nota1 + nota2 + nota3) / 3;

    //SA�DA DE DADOS
printf("A m�dia �: %.1f", media);

}
