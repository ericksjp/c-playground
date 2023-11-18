/* 
    269. Escreva um subprograma recursivo que receba como entrada um vetor de 10 
    números inteiros e um número inteiro N entre 1 e 10 e verifique se existe algum 
    número  primo a partir da posição N do vetor.  
*/
#include <stdio.h>
#define TAMANHO 10
int ehprimo (int c) //recursivo
{
    if ( c<1){
        return 0;
    }

    int ehprimoin(int j){
        if (j==1){
            return 1;
        } else {
            if (c%j==0){
                return ehprimoin(j-1) + 1;
            } else {
                return 0 + ehprimoin(j-1);
            }
        }
    }

    int verificador = ehprimoin(c);
    if (verificador==2){
        return 1;
    } else {
        return 0;
    }
}

int vetpar (int vet[], int tamanho,int indice)
{
    if (indice==tamanho){
        if (ehprimo(vet[indice-1])==1) {
            return 1;
        }
        else {
            return 0;
        }
    } else {
        if (ehprimo(vet[indice-1])==1){
            return 1 + vetpar(vet,tamanho,indice+1);
        }else {
            return 0 + vetpar(vet,tamanho,indice+1);
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
    printf("\nApartir da posicao %d do vetor, existem %d numeros primos.",indice,total);
    return 0;
}
