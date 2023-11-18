/* 
    19. Escreva um programa que le ia os valores de dois ângulos internos de um triângulo e 
    calcule o valor do terceiro ângulo.  
*/
#include <stdio.h>

int main() {
    printf("<<< exe019 >>>\n\n");

    float angulo1,angulo2;
    printf("Informe o valor do primeiro angulo em graus: ");
    scanf("%f",&angulo1);
    printf("Informe o valor do segundo angulo em graus: ");
    scanf("%f",&angulo2);

    float angulo3 = 180 - (angulo1+angulo2);

    if (angulo1<=0 || angulo2<=0 || angulo3<=0){
        printf("Triangulo nao atende as condicoes de existencia");
    } else{
        printf("Valor do terceiro angulo em graus: %.2f",angulo3);
    }
    return 0;
}
