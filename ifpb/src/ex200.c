/* 
    200. Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e 
    o seu perímetro. O programa deve ter um subprograma para calcular a área e outro 
    para calcular o perímetro.  
*/
#include <stdio.h>

float perimetro(float medida)
{
    return medida*4;
}

float area(float medida)
{
    return medida*medida;
}

int main()
{
    float lado;
    printf("Informe a medida do lado do quadrado -> ");
    scanf("%f",&lado);

    float valperimetro = perimetro(lado);
    float valarea = area(lado);

    printf("O perimetro do quadrado eh %f\n",valperimetro);
    printf("A area do quadrado eh %f\n",valarea);
    return 0;
}
