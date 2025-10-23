/* 
    101. Escreva um programa que leia um número inteiro  positivo N e imprima os N 
    prime iros números ímpares positivos.  
*/
#include <stdio.h>

int main()
{
    int num;
    printf("Informe um numero inteiro positvo: ");
    if (scanf("%d",&num)==0 || num<0){
        printf("Entrada invalida!");
        return 0;
        exit(0);
    }

    if (num%2==0){
        num-=1;
    }

    for (int c=1; c<=num; c+=2){
        printf("\n%d",c);
    }
    return 0;

}
