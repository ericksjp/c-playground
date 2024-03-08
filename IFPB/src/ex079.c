/*  
    79. Escreva um programa que leia os coeficientes a, b e c de uma equação do 2º grau e 
    verifique a quantidade de raízes reais da equação.  
*/
#include <stdio.h>

#include <math.h>

int main()
{
    
    float a,b,c;

    printf("Abaixo, informe os coeficientes a, b e c de uma equacao do 2do grau.\n\n");
    printf("Coeficiente a -> ");
    scanf("%f",&a);
    printf("Coeficiente b -> ");
    scanf("%f",&b);
    printf("Coeficiente c -> ");
    scanf("%f",&c);

    float delta = pow(b,2) - (4*a*c);
    printf("\n");

    if (a==0){
        printf("Erro! Para ser uma funcao de 2do grau o coeficiente a tem que ser diferente de 0.");
        exit(0);
    }

    if (delta>0){
        printf("Delta>0. Essa equacao vai ter 2 raizes reais.\n");
    } else if(delta<0) {
        printf("Delta<0. Essa equacao nao vai ter nenhuma raiz real.");
    } else {
        printf("Delta==0. Essa equacao vai ter apenas 1 raiz real.");
    }
    return 0;
}
