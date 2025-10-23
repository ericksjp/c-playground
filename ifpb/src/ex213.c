/* 
    213. Escreva um programa que leia os valores das coordenadas X e Y e dois pontos P e Q e 
    determine a distância entre estes dois pontos. A distância entre dois pontos pode ser 
    determina da através da distância euclidiana. O cálculo da distância deve ser realizado 
    através de um subprograma, que deve receber como entrada os valores das 
    coordenadas x e y dos dois pontos.  
*/
#include <stdio.h>
#include <math.h>

float distancia(float ponto1X, float ponto1Y, float ponto2X, float ponto2Y) {
    return sqrt(pow(ponto1X - ponto2X, 2) + pow(ponto1Y - ponto2Y, 2));
}

int main() {
    float p1x,p1y,p2x,p2y;
    printf("Informe o X do primeiro ponto: ");
    scanf("%f", &p1x);
    printf("Informe o Y do primeiro ponto: ");
    scanf("%f", &p1y);
    printf("Informe o X do segundo ponto: ");
    scanf("%f", &p2x);
    printf("Informe o Y do segundo ponto: ");
    scanf("%f", &p2y);

    float dist = distancia(p1x,p1y,p2x,p2y);

    printf("A distancia entre os dois pontos eh de %.2f\n", dist);

    return 0;
}