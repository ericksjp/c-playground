/* 
    266. Escreva um  subpro grama recursivo que receba como entrada um vetor de 10 
    números inteiros e um número inteiro N entre 1 e 10 e calcule a soma de todos os 
    elementos do vetor a partir da posição N.  
*/
#include <stdio.h>
#define TAMANHO 10

int soma (int vet[],int tamanho, int indice)
{
    if (indice==tamanho){
        return vet[indice-1];
    } else {
        return vet[indice-1] + soma(vet,tamanho,indice+1);
    }
}

int main()
{
    int num;
    int vetor[TAMANHO];
    for (int c = 0; c<TAMANHO; c++){
        printf("Informe o %d numero do vetor (%d/10) --------> ",c+1,c+1);
        scanf("%d",&vetor[c]);
    }
    printf("\nInforme de qual posicao deseja comecar a soma -> ");
    scanf("%d",&num);
    int total = soma(vetor, TAMANHO, num);
    printf("\nResultado -> %d",total);
    return 0;
}
