/* 
    7. Escreva um programa que leia o valor da base e da altura de um triângulo e calcule a  q 
    a sua á rea. 
*/
#include <stdio.h>

int main() {
    printf("<<< ex007 >>>\n\n");

    float base,altura;

    printf("Altura do triangulo: ");
    scanf("%f",&altura);

    printf("Base do triangulo: ");
    scanf("%f",&base);

    float area = (base*altura)/2;

    printf("Area do triangulo: %.2f\n",area);
    return 0;
}
