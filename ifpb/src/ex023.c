/* 
    23. Escreva um programa que leia o valor do raio de uma es fera e determine o seu 
    volume.  
*/
#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
   
    printf("<<< exe023 >>>\n\n");

    float raio;
    printf("Valor do raio da esfera: ");
    scanf("%f",&raio);

    float volume = 4*PI*pow(raio,3)/3;

    printf("O volume da esfera eh de: %f",volume);
    return 0;
}
