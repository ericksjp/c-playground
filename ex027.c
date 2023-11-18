/* 
    27. Escreva um programa que leia o comprimento e a largura de uma cisterna e a 
    quantidade de litros que o usu ário deseja armazenar na mesma e determine quantos 
    metros ele deve encher a cisterna para obter a quantidade de litros desejada.  
*/
#include <stdio.h>

int main() {
    
    printf("<<< exe027 >>>\n\n");

    float cumprimento,largura,volume;

    printf("Cumprimento da cisterna (m): ");
    scanf("%f",&cumprimento);
    printf("Largura da cisterna (m): ");
    scanf("%f",&largura);
    printf("Quantidade de litros que deseja armazenar: ");
    scanf("%f",&volume);

    float conv = (volume/1000)*1000;
    float altura = conv/(cumprimento*largura);

    printf("Altura em metros da cisterna para obter a quantidade de litros desejada: %.1fm",altura);
    return 0;

}
