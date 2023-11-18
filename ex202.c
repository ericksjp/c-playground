/* 
    202. Escreva um programa que leia o valor do raio de uma circunferênc ia e ca lcule a sua 
    área e o seu comprimento. O programa deve fornecer um subprograma para calcular 
    a área e outro para calcular o comprimento.  
*/
#include <stdio.h>

float area(float num)
{
    return (num*num)*3.14;
}

float comprimento (float num)
{
    return 2*3.14*num;
}

int main ()
{
    float raio;
    printf("Informe o valor do raio da circunferencia -> ");
    scanf("%f",&raio);

    float valarea = area(raio);
    float valcomprimento = comprimento(raio);

    printf("Area da circunferencia: %f\n",valarea);
    printf("Comprimento da circunferencia: %f\n",valcomprimento);
    return 0;
}