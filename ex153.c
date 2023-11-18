/* 
    153. Escreva um programa que leia dez números inteiros e, após finalizar a leitura, 
    imprima todos os números lidos na mesma ordem em que eles foram digitados.  
*/
#include <stdio.h>
#define QUANTIDADE 10

int main()
{
    int vetor[QUANTIDADE];
    int c = 0;

    while (c<QUANTIDADE){
        int num;
        printf("Informe um numero inteiro: ");
        scanf("%d",&num);
        vetor [c]= num;
        c++;
    }
    printf("\n");
    c = 0;
    while (c<QUANTIDADE){
        printf("%d - ",vetor[c]);
        c++;
    }
    return 0;
}
