/* 
    8. Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu 
    valor correspondente em Fahrenheit e em Kelvin.  
*/
#include <stdio.h>

int main() {
    printf("<<< ex008 >>>\n\n");

    float temperaturaC;

    printf("Informe a temperatura em C: ");
    scanf("%f",&temperaturaC);

    float fahrenheit = (1.8*temperaturaC)+32;
    float kelvin = temperaturaC+273.15;

    printf("Temperatura em F: %.2f\nTemperatura em K: %.2f\n",fahrenheit,kelvin);
    return 0;
}
