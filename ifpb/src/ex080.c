/* 
    80. Escreva um programa que leia os coeficientes a, b e c de uma equação do 2º grau e 
    calcule todas as suas raízes reais.  
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
        float x1 = ((b*-1) + sqrt(delta))/(2*a);
        float x2 = ((b*-1) - sqrt(delta))/(2*a);
        printf("Delta>0. Essa equacao vai ter 2 raizes reais.\n");
        printf("X1 -> %.2f\n",x1);
        printf("X2 -> %.2f\n",x2);
    } else if(delta<0) {
        printf("Delta<0. Essa equacao nao vai ter nenhuma raiz real.");
    } else {
        float x1 = (b*-1)/(2*a);
        printf("Delta==0. Essa equacao vai ter apenas 1 raiz real.");
        printf("X -> %.2f\n",x1);
    }
    return 0;
}
