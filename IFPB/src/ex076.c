/* 
    76. Escreva um programa que leia as coordenadas x e y de um ponto e verifique a qua l 
    quadrante este ponto pertence. Você pode supor que o ponto digitado pelo usuário 
    pertence a apenas um quadrante.  
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

    if (x>0 && y>0){
        printf("Este ponto pertence ao 1ro quadrante.");
    } else if (x<0 && y>0){
        printf("Esse ponto pertence ao 2ro quadrante.");
    } else if (x<0 && y<0){
        printf("Esse ponto pertence ao 3ro quadrante.");
    } else if (x>0 && y<0){
        printf("Esse ponto pertence ao 4ro quadrante.");
    } else if (x==0 && y!=0){
        printf("Esse ponto pertence ao eixo das abscissas.");
    } else if (x!=0 && y==0){
        printf("Esse ponto pertence ao eixo das ordenadas.");
    } else if (x==0 && y==0){
        printf("Esse ponto pertence a origem do plano cartesiano.");
    }
    return 0;

}
