/* 
    238. Escreva um programa que leia os valores das coordenadas x e y do centro de uma 
    circunferência e o valor do seu raio e, a seguir, leia as coordenadas x e y de dez 
    pontos e verifique se  cada p onto está ou não localizado dentro da circunferência. O 
    programa deve ter um subprograma para calcular a distância e outro para 
    determinar se um ponto está dentro ou fora da circunferência.  
*/
#include <stdio.h>

#include <stdio.h>
#include <math.h>

float distanciaMaxima(float x, float y, float raio) {
    float x2 = x;
    float y2 = y + raio;
    return sqrt(pow(x - x2, 2) + pow(y - y2, 2));
}

float distancia(float x1, float y1, float x2, float y2){
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

float estaDentro(float maximo,  float distancia) {
    if (distancia - maximo <= 0) {
        return 1;
    }
    return 0;
}


int main() {
    float coordX, coordY, raio;
    printf("Informe as coordenadas do ponto central da circunferencia.\n");
    printf("X: ");
    scanf("%f", &coordX);
    printf("Y: ");
    scanf("%f", &coordY); 
    printf("Informe o comprimento do raio da circunferencia: ");
    scanf("%f", &raio); 

    float dm = distanciaMaxima(coordX, coordY, raio);
    printf("-----------------------------------\n");
    int c;
    float coordXponto, coordYponto;
    for (c = 0; c < 10; c++) {
        printf("Informe a coordenada X do ponto: ");
        scanf("%f", &coordXponto);
        printf("Informe a coordenada Y do ponto: ");
        scanf("%f", &coordYponto);

        float dist = distancia(coordX, coordY, coordXponto, coordYponto);
        if (estaDentro(dm, dist)) {
            printf("O ponto esta localizado dentro da circunferencia!");
        } else {
            printf("O ponto nao esta localizado dentro da circunferencia!");
        }
        printf("\n");
    }
}