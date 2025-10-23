/* 
    268. Escreva um subprograma recursivo que receba como entrada um vetor de 10 
    números inteiros e um número in teiro N  entre 1 e 10 e verifique quantos números 
    pares existem a partir  da posição N do vetor.  
*/
#include <stdio.h>


#define TAMANHO 10
int vetpar (int vet[], int tamanho,int indice)
{
    if (indice==tamanho){
        if (vet[indice-1]%2==0){
            return 1;
        }
        return 0;
    } else {
        if (vet[indice-1]%2==0){
            return vetpar(vet,tamanho,indice+1) + 1;
        } else {
            return vetpar(vet,tamanho,indice+1) + 0;
        }
    }

}

int main()
{
    int indice;
    int vetor[TAMANHO];
    for (int c = 0; c<TAMANHO; c++){
        printf("Informe o %d numero do vetor (%d/10) --------> ",c+1,c+1);
        scanf("%d",&vetor[c]);
    }

    printf("\nInforme de qual posicao deseja comecar a verificacao -> ");
    scanf("%d",&indice);

    int total = vetpar(vetor, TAMANHO, indice);
    printf("\nApartir da posicao %d do vetor, existem %d numeros pares.",indice,total);
    return 0;
}
