/* 
    5. Escreva um programa que leia o valor do ra io de uma circunferência e calcule a sua 
    área e o seu comprimento.  
*/
#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    printf("<<< ex005 >>>\n\n");

    float raio;

    printf("Valor do raio da circunferencia: ");
    scanf("%f",&raio);

    float area = PI*(raio*raio);
    float cumprimento = 2*PI*raio;

    printf("Area da circunferencia: %.2f\nCumprimento da circunferencia: %.2f\n",area,cumprimento);
    
    return 0;
}
