/* 
    158. Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a 
    leitura, imprima todos os elementos do vetor que são maiores do que a méd ia 
    aritmética de todos os elementos do vetor.  
*/
#include <stdio.h>
#define QUANTIDADE 10

int main()
{
    int vetor[10]; int c = 0; int media = 0;
    while(c<QUANTIDADE){
        int num;
        printf("Informe um numero inteiro: ");
        scanf("%d",&num);
        vetor[c]=num;
        media+= num;
        c++;
    }

    printf("\n");

    media = (float)media/QUANTIDADE;

    c=0;
    while(c<QUANTIDADE){
        if (vetor[c]>media){
            printf("%d - ",vetor[c]);
        }
        c++;
    }
    return 0;


}
