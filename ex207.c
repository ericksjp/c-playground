/* 
    207. Escreva um programa que leia um valor em polegadas e o converta para centímetros, 
    considerando que uma polegada equivale a 2.54 cm. A conver são dev e ser realizada 
    através de um subprograma.  
*/
#include <stdio.h>

float centimetros (float polegadas)
{
    return polegadas*2.54;
}

int main()
{
    float polegada;
    printf("Informe o valor em polegadas -> ");
    scanf("%f",&polegada);

    float tocentimetro = centimetros(polegada);

    printf("\nConvertendo para centimetros -> %2f",tocentimetro);
    return 0;
}