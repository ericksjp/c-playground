/*
    203. Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a  
    sua área , que deve ser cal culada através de um subprograma.  
*/
#include <stdio.h>

float area (float base, float altura)
{
    return (base*altura)/2;
}

int main()
{
    float base, altura;
    printf("Informe o valor da base do triangulo -> ");
    scanf("%f",&base);
    printf("Informe o valor da altura do triangulo -> ");
    scanf("%f",&altura);

    float valarea = area(base,altura);

    printf("\nArea do triangulo -> %f",valarea);
    return 0;



}
