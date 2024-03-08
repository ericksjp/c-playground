/* 
    12. Escreva um programa que leia um valor em polegadas e o converta para centímetros, 
    considerando que uma polegada equivale a 2.54 cm.  
*/
#include <stdio.h>
int main() {
    printf("<<< exe012 >>>\n\n");

    float polegadas;
    printf("Digite um valor em polegadas: ");
    scanf("%f",&polegadas);

    float centimetros = polegadas*2.54;

    printf("Valor em centimetros: %.2f",centimetros);

    return 0;
}
