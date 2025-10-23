/* 
    219. Escreva um programa  que le ia o valor total que um cliente consumiu em um 
    restaurante e determine o valor final da sua conta, considerando que o restaurante 
    cobra uma taxa de serviço de 10 % e uma taxa de couvert artístico de R$ 10,00. A 
    conta deve ser calculada através de um  subpro grama.  
*/
#include <stdio.h>

float valorFinal(float valorConsumo) {
    return (10 * valorConsumo / 100) + 10 + valorConsumo;
}

int main(){
    float valorConsumo;
    printf("Informe o valor total gasto pelo Cliente: ");
    scanf("%f", &valorConsumo);

    float valFinal = valorFinal(valorConsumo);

    printf("O valor final eh de %.2f\n", valFinal);

    return 0;
}