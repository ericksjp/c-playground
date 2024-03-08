/*
    106. Escreva um programa que leia dois números inteiros M e N e calcule a média 
    aritmética  dos números d o intervalo [M, N].  
*/
#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Informe um numero inteiro: ");
    if (scanf("%d",&num1)==0){
        printf("Entrada invalida!");
        return 0;
        exit(0);
    }
    printf("Informe outro numero inteiro: ");
    if (scanf("%d",&num2)==0){
        printf("Entrada invalida!");
        return 0;
        exit(0);
    }

    int soma=0;
    int contador=0;
    int num_show = num1;

    if (num1>num2){
        num1-=1;
        while (num1>num2){
            soma+=num1;
            contador++;
            num1--;
        }
    } else if (num1<num2){
        num1+=1;
        while (num1<num2){
            soma+=num1;
            contador++;
            num1++;
        }
    } else{
        printf("intervalo vazio");
    }

    float media = (float)soma/contador;

    printf("A media aritmetica do intervalo entre %d e %d eh %.2f",num_show,num2,media);
    return 0;

}
