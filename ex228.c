/* 
    228. Escreva um programa que leia as coordenadas x e y de um ponto e verifique a 
    quantidade de quadrantes a que este ponto pertence. Esta verificação de ve ser 
    realizada através de um subprograma.  
*/
#include <stdio.h>

int quantQuadrante(float x, float y) {
    if (x == 0 && y == 0) return 4;
    else if (x == 0 || y == 0) return 2;
    else return 1;
}

int main() {
    float x,y;
    printf("Informe a coordenada X do ponto: ");
    scanf("%f", &x);
    printf("Informe a coordenada Y do ponto: ");
    scanf("%f", &y);
    printf("----------------------------------------------------\n");
    int quant = quantQuadrante(x,y);
    printf("O ponto pertence a %d quadrantes.\n", quant);

    return 0;
}