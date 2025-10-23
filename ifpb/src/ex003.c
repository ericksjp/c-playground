/* 
    3. Escreva um programa que leia o valor do lado de um quadrado e calcule a sua área e o 
    seu perímetro.  
*/
#include <stdio.h>

int main() {
    printf("<<< ex003 >>>\n\n");

    float lado;

    printf("Tamanho do lado: ");
    scanf("%f",&lado);

    float area = lado*lado;
    float perimetro = lado*4;

    printf("Area do quadrado: %.2f\n",area);
    printf("Perimetro do quadrado: %.2f\n",perimetro);
    
    return 0;
}
