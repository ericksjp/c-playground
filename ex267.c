/* 
    267. Escreva um subprograma recursivo que receba como entrada um vetor de 1 0 
    númer os inteiros, um número inteiro N entre 1 e 10 e um número inteiro X e 
    verifique quantas vezes o número X aparece no vetor a partir da posição N.  
*/
#include <stdio.h>
#define TAMANHO 10
int aparicoes (int vet[], int tamanho,int indice, int numero)
{
    if (indice==tamanho){
        if (vet[indice-1]==numero){
            return 1;
        }
        return 0;
    } else {
        if (vet[indice-1]==numero){
            return aparicoes(vet,tamanho,indice+1,numero) + 1;
        } else {
            return aparicoes(vet,tamanho,indice+1,numero) + 0;
        }
    }
}

int main()
{
    int indice;
    int vetor[TAMANHO];
    int num;
    for (int c = 0; c<TAMANHO; c++){
        printf("Informe o %d numero do vetor (%d/10) --------> ",c+1,c+1);
        scanf("%d",&vetor[c]);
    }

    printf("\nInforme o numero que deseja verificar -> ");
    scanf("%d",&num);

    printf("\nInforme de qual posicao deseja comecar a verificacao -> ");
    scanf("%d",&indice);

    int total = aparicoes(vetor, TAMANHO, indice,num);
    printf("\nResultado -> %d",total);
    return 0;
}
