/* 
    9. Escreva um programa que leia o valor de uma distância percorrida em km e o tempo 
    gasto em horas e calcule a velocidade  méd ia em m/s.  
*/
#include <stdio.h>

int main() {
    printf("<<< ex009 >>>\n\n");

    float km,horas;

    printf("Distancia em KM: ");
    scanf("%f",&km);
    printf("Tempo em horas: ");
    scanf("%f",&horas);

    float metro = km*1000;
    float segundo = horas*60*60;
    float minuto_por_segundo = metro/segundo;

    printf("Velocidade em M/S: %.2f",minuto_por_segundo);
    return 0;
}
