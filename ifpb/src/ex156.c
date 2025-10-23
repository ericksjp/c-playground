/* 
    156. Escreva um  programa que leia um vetor de 10 números inteiros e, após terminar a 
    leitura, leia um número inteiro N e imprima todos os elementos do vetor que são 
    maiores que N
*/
#include <stdio.h>
#define QUANTIDADE 10

int main()
{
    int vetor[QUANTIDADE]; int c=0;

    while (c<QUANTIDADE){
        int num;
        printf("Informe um numero inteiro: ");
        scanf("%d",&num);
        vetor[c]= num;
        c++;
    }

    int num2;
    printf("\nAgora, informe outro numero inteiro: ");
    scanf("%d",&num2);

    c=0;
    while(c<QUANTIDADE){
        if (vetor[c]>num2){
            printf("%d - ",vetor[c]);
        }
        c++;
    }
    return 0;
}
