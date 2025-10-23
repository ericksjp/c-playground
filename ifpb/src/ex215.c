/* 
    215. O carro de João consegue percorrer em média 14 km consumindo 1 litro de 
    combustível. Escreva um programa que leia o valor da distância que João vai 
    percorrer durante uma viagem e o preço atual de um litro de comb ustível e calcule 
    quanto ele deverá gastar com combustível durante a viagem. O cálculo deve ser 
    realizado através de um subprograma.  
*/
#include <stdio.h>

float valorGasto(float distanciaPercorrida, float precoGasosa) {
    return distanciaPercorrida / 14 * precoGasosa;
}

int main() {
    float distanciaPercorrida, precoGasosa;
    printf("Informe a distancia que Joao vai percorrer durante a viagem em Km: ");
    scanf("%f", &distanciaPercorrida);

    printf("Informe o preco da gasolina: ");
    scanf("%f", &precoGasosa);

    float valorTotal = valorGasto(distanciaPercorrida,precoGasosa);

    printf("Joao tera que gastasr R$ %.2f para fazer a viagem.\n", valorTotal);

    return 0;
}

