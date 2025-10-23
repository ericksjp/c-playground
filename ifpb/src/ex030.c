/* 
    30. Escreva um programa que leia os valores das coordenadas X e Y e dois pontos P e Q e 
    determine a distância entre estes dois pontos. A distância entre doi s ponto s pode ser 
    determinada através da distância euclidiana.  
*/
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    
    printf("<<< exe030 >>>\n\n");

    float xp,yp,xq,yq;

    printf("====== DISTANCIA EUCLIDIANA ======\n\n");
    printf("Insira X da coordenada do PONTO P: ");
    scanf("%f",&xp);
    printf("Insira Y da coordenada do PONTO P: ");
    scanf("%f",&yp);
    printf("\nInsira X da coordenada do PONTO Q: ");
    scanf("%f",&xq);
    printf("Insira Y da coordenada do PONTO Q: ");
    scanf("%f",&yq);

    float distancia=sqrt(pow(xp-xq,2)+pow(yp-yq,2));

    char distancia_str[30];

    //n�o interfere de fato no codigo, � uma condi��o puramente estetica para a melhor apresenta��o dos resultados, ent�o n�o vou tirar.
    if (distancia==(int)distancia){
            int distancia2 = (int)distancia;
            sprintf(distancia_str,"%d",distancia2);
    } else {
        sprintf(distancia_str,"%f",distancia);
        int len = strlen(distancia_str);
        while (distancia_str[len-1]=='0') {
            distancia_str[len-1] ='/0';
            --len;
        }
    }
    printf("\nDistancia entre os pontos P e Q: %s",distancia_str);
    return 0;

}
