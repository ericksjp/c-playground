/* 
    75. Escreva  um programa que leia os valores dos três ângulos internos de um triângulo e 
    verifique se o mesmo é um triângulo retângulo .  
*/
#include <stdio.h>


int main()
{
    
    float angulo1,angulo2,angulo3;
    printf("Abaixo, informe os angulos de um triangulo em graus.\n\n");
    printf("1ro angulo: ");
    scanf("%f",&angulo1);
    printf("2ro angulo: ");
    scanf("%f",&angulo2);
    printf("3ro angulo: ");
    scanf("%f",&angulo3);

    float soma=angulo1+angulo2+angulo3;
    printf("\n");

    if (soma!=180 || (angulo1==0 || angulo2==0 || angulo3==0)){
        printf("Erro!! Um dos possiveis erros pode ter acontecido.\n-> A soma dos angulos eh diferente de 180�.\n-> Um dos angulos deu 0�.");
    } else{
        if (angulo1==90 || angulo2==90 || angulo3==90){
            printf("Esse eh um triangulo retangulo.");
        } else{
            printf("Esse nao eh um triangulo retangulo.");
        }
    }
    return 0;
}
