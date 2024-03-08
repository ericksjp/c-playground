/*
    205. Escreva um programa que leia o valor de uma distância percorrida em km e o tempo 
    gasto em horas e calcule a velocidade média em m/s. A conversão deve ser realizada 
    através de um subprograma.  
*/
#include <stdio.h>

float mps(float km, float horas)
{
    return (km/horas)/3.6;
}

int main()
{
    float distancia, tempo;
    printf("Informe a distancia percorrida em Km -> ");
    scanf("%f",&distancia);
    printf("Informe o tempo gasto em horas -> ");
    scanf("%f",&tempo);

    float valmps = mps(distancia,tempo);

    printf("\nA velocidade media em M/S foi de: %2fm/s",valmps);
    return 0;

}