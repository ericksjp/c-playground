/* 
    234. Escreva um programa que leia as coordenad as x e y de dez pontos e verifique a qual 
    quadrante cada ponto pertence. Você pode supor que cada ponto digitado pelo 
    usuário pertence a apenas um quadrante.  
*/

#include <stdio.h>

int calcQuadrante(float x, float y) {
    if (x > 0 && y > 0) {
        return 1;
    } else if (x < 0 && y > 0) {
        return 2;
    } else if (x < 0 && y < 0) {
        return 3;
    } else if (x > 0 && y < 0) {
        return 4;
    } else {
        return 0;
    }
}

int main() {
    float x, y;
    printf("Informe X do ponto: ");
    scanf("%f", &x);
    printf("Informe Y do ponto: ");
    scanf("%f", &y);


    int quadrante =  calcQuadrante(x,y);

    printf("O ponto de coordenada (%f, %f) pertence ao %do quadrante.\n", x, y, quadrante);

    return 0;
}

