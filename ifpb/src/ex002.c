/* 
    2. Escreva um programa que leia três números e seus respectivos pesos e calcule a sua 
    média ponderada.  
*/
#include <stdio.h>

int main() {
    printf("<<< ex002 >>>\n\n");

    float numero1,numero2,numero3,peso1,peso2,peso3;

    printf("Digite o primeiro numero: ");
    scanf("%f",&numero1);
    printf("Peso do primeiro numero: ");
    scanf("%f",&peso1);

    printf("Digite o segundo numero: ");
    scanf("%f",&numero2);
    printf("Peso do segundo numero: ");
    scanf("%f",&peso2);

    printf("Digite o terceiro numero: ");
    scanf("%f",&numero3);
    printf("Peso do terceiro numero: ");
    scanf("%f",&peso3);

    float media = ((numero1*peso1) + (numero2*peso2) + (numero3*peso3)) / (peso1+peso2+peso3);

    printf("Media: %.1f\n",media);

    return 0;
}
