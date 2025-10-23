/* 
    233. Escreva um programa que leia os valores dos três ângulos internos de um triângulo e 
    verifique se o mesmo é um triângulo retângulo. Esta verificação deve ser realizada 
    através de um subprograma.  
*/
#include <stdio.h>


int ehtriangulo(float lado1, float lado2, float lado3)
{
    if ((lado1+lado2+lado3==180) && (lado1>0 && lado2>0 && lado3>0) && (lado1==90 || lado2==90 || lado3==90)){
        return 1;
    }
    return 0;
}

int main()
{
    float l1,l2,l3;
    printf("Informe os tres lados do triangulo -> ");
    scanf("%f%f%f",&l1,&l2,&l3);

    int verificacao = ehtriangulo(l1,l2,l3);

    if (verificacao){
        printf("Esse eh um triangulo retangulo.");
    } else {
        printf("Esse nao eh um triangulo retangulo.");
    }
    return 0;
}
