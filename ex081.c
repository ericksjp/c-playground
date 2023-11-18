/* 
    81. Escreva um programa que leia os valores das co ordenad as x e y do centro de uma 
    circunferência e o valor do seu raio e, a seguir, leia as coordenadas x e y de um ponto e 
    verifique se este ponto está localizado dentro da circunferência.  
*/
#include <stdio.h>

#include <math.h>

int main()
{
    
    float x,y,x_centro,y_centro,raio;

    printf("Abaixo, informe as coordenadas X e Y do centro da circunferencia.\n");
    printf("Coordenada X do ponto: ");
    scanf("%f",&x_centro);
    printf("Coordenada Y do ponto: ");
    scanf("%f",&y_centro);

    printf("\nAgora, informe o valor do raio da circunferencia.\n");
    printf("Raio da circunferencia: ");
    scanf("%f",&raio);

    if (raio<0){
        printf("Erro! Raio<0 nao eh permitido pela definicao de circunferencia.");
        exit(0);
    }

    printf("\nAgora, informe as coordenadas X e Y do ponto P, para verificar se ele est� dentro da circunferencia.\n");

    printf("Coordenada X do ponto: ");
    scanf("%f",&x);
    printf("Coordenada Y do ponto: ");
    scanf("%f",&y);

    float distancia = sqrt(pow(x_centro-x,2) + pow(y_centro-y,2));

    if (distancia<=raio){
        printf("\nO ponto P esta dentro da circunferencia.");
    } else{
        printf("\nO ponto P esta fora da circunferencia.");
    }
    return 0;

}
