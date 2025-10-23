/* 
    102. Escreva um programa que leia um número inteiro N e imprima todos os seus 
    divisores exatos.  
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

    for (int c=1; c<=num; c++){
        if (num%c==0){
            printf("\n%d",c);
        }
    }
    return 0;

}
