/*
    1. Escreva um programa que leia três números inteiros e calcule a sua média aritmética.  
*/
#include <stdio.h>

int main() {
    printf("<<< ex001 >>>\n\n");

    float numero1,numero2,numero3;
    printf("Digite o primeiro numero: ");
    scanf("%f",&numero1);
    printf("Digite o segundo numero: ");
    scanf("%f",&numero2);
    printf("Digite o terceiro numero: ");
    scanf("%f",&numero3);

    float media = (numero1+numero2+numero3) / 3;

    printf("Media: %.1f\n",media);

    return 0;
}
