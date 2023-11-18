/* 
    120. Escreva um programa que leia um número inteiro  positi vo N e imprima a maior 
    quantidade possível de números inteiros positivos de forma que a soma de todos os 
    números impressos seja menor ou igual a N.  
*/
#include <stdio.h>

int main()
{
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%d",&n);

    int c=0;
    int soma=0;
    while (c<=n){
        soma+=c;
        if (soma<=n){
            printf("%d\n",c);
        }
        c++;
    }
    return 0;
}
