/* 
    216. Escreva um programa que leia o valor de uma distância em metros e calcule o seu 
    valor correspondente em quilômetros , hectô metros, decâmetros, centímetros, 
    decímetros e milímetros. O programa deve ter um subprograma para converter para 
    cada unidade de medida.  
*/
#include <stdio.h>

float valQuilometros(float distancia) {
    return distancia / 1000.0;
}

float valHectometros(float distancia) {
    return distancia / 100.0;
}

float valDecametros(float distancia) {
    return distancia / 10.0;
}

float valDecimetros(float distancia) {
    return distancia * 10;
}

float valCentimetros(float distancia) {
    return distancia * 100;
}

float valMilimetros(float distancia) {
    return distancia * 1000;
}

int main() {
    float distancia;
    printf("Informe a distancia em metros: ");
    scanf("%f", &distancia);

    float km = valQuilometros(distancia);
    float hem = valHectometros(distancia);
    float dem = valDecametros(distancia);
    float dm = valDecimetros(distancia);
    float cm = valCentimetros(distancia);
    float mm = valMilimetros(distancia);

    printf("Distancia em Quilometros: %.2f\n", km);
    printf("Distancia em Hectometros: %.2f\n", hem);
    printf("Distancia em Decametros: %.2f\n", dem);
    printf("Distancia em Decimetros: %.2f\n", dm);
    printf("Distancia em Centimetros: %.2f\n", cm);
    printf("Distancia em Milimetros: %.2f\n", mm);

    return 0;
}
