/* 
    112. Escreva um programa que leia um número inteiro N e imprima o enésimo termo da 
    série de Fibonacci. (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...).  
*/
#include <stdio.h>

int main()
{
    int fator;
    printf("Informe um numero inteiro positivo: ");
    if (scanf("%d",&fator)==0){
        printf("Entrada invalida!");
        return 0;
        exit(0);
    }
    int num1=0,num2=1;

    fator-=2;

    printf("%d -> %d -> ",num1,num2);
    int num3=0;
    while (fator>0){
        num3=num1+num2;
        printf("%d -> ",num3);
        num1=num2;
        num2=num3;
        fator--;
    }
    printf("FIM!");
    return 0;
}
