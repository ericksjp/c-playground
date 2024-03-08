/* 
    77. Escreva um programa que leia as coordenadas x e y de um ponto e verifique se este 
    ponto pertence à reta y = 2x +1.  
*/
#include <stdio.h>


int main()
{
    
    float x,y;

    printf("Abaixo informe as coordenadas X e Y do ponto.\n\n");
    printf("Informe a coordenada X do ponto: ");
    scanf("%f",&x);
    printf("Informe a coordenada Y do ponto: ");
    scanf("%f",&y);
    printf("\n");

    //y = 2x +1.
    x = x*2+1;

    if (x==y){
        printf("O ponto informado pertence a reta y = 2x +1.");
    } else {
        printf("O ponto informado nao pertence a reta y = 2x +1.");
    }
    return 0;

}
