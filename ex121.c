/* 
    121. Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e 
    um número inte iro N e  imprima todos os termos da progressão menores ou iguais a N 
    (caso a razão seja positiva) ou todos os termos maiores ou iguais a N (caso a razão seja 
    negativa).  
*/
#include <stdio.h>

int main()
{
    int termo_inicial, razao, num;
    printf("Termo inicial da PA: ");
    scanf("%d",&termo_inicial);
    printf("Informe a razao da PA: ");
    scanf("%d",&razao);
    printf("Informe um numero inteiro: ");
    scanf("%d",&num);

    while (termo_inicial<=num){
        printf("%d ",termo_inicial);
        termo_inicial+=razao;
    }
    return 0;

}
