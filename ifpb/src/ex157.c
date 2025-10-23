/*
    157. Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a 
    leitura, l eia um número inteiro N e imprima todas as posições em que o número N 
    aparece dentro do vetor.  
*/
#include <stdio.h>

#define QUANTIDADE 10
int main()
{
    int vetor[QUANTIDADE]; int c = 0;
    while(c<QUANTIDADE){
        int num;
        printf("Informe um numero inteiro: ");
        scanf("%d",&num);
        vetor[c] = num;
        c++;
    }

    int num2;
    printf("\nAgora,informe outro numero inteiro: ");
    scanf("%d",&num2);
    printf("O numero %d aparece nas posicoes: ",num2);

    c=0;
    while(c<QUANTIDADE){
        if (vetor[c]==num2){
            printf("%d - ",c);
        }
        c++;
    }
    return 0;
}
