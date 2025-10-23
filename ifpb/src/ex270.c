/* 
    270. Escreva um subprograma recursivo que receba como entrada dois vetores de 10 
    números inteiros cada e um número inteiro N e verifique se os dois vetores são 
    idênticos a partir da posição N.  
*/
#include <stdio.h>


int vetIdentico (int *vet, int *vet2, int posicao)
{
    if (*(vet+posicao)==*(vet2+posicao)){
            if (posicao==9){
                return 1;
            }
        vetIdentico (vet,vet2,posicao+1);
    } else {
        return 0;
    }
}

int main()
{
    int vet1 [] = {1,2,3,4,5,6,7,8,9,10};
    int vet2 [] = {1,2,3,4,5,6,7,8,9,10};

    if (vetIdentico(vet1,vet2,0)){
        printf("iguais");
    } else {
        printf("que pena");
    }
}