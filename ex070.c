/* 
    70. Escreva um programa que leia os valores dos três lados de um triângulo e o classifique 
    como equilátero, isósceles ou es caleno.  
*/
#include <stdio.h>

int main()
{
    printf("<<< exe070 >>>\n\n");
    printf("Informe abaixo os valores de cada lado do triangulo.\n\n");

    float lado1,lado2,lado3;

    printf("Primeiro lado: ");
    scanf("%f",&lado1);
    printf("Segundo lado: ");
    scanf("%f",&lado2);
    printf("Terceiro lado: ");
    scanf("%f",&lado3);

    if (lado1==lado2 && lado2==lado3 && lado3==lado1){
        printf("Esse eh um triangulo equilatero.");
    } else if (lado1!=lado2 && lado2!=lado3 && lado3!=lado1){
        printf("Esse eh um triangulo escaleno.");
    } else {
        printf("Esse eh um triangulo isosceles.");
    }
    return 0;

}
