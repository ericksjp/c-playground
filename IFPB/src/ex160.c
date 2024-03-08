/* 
    160. Escreva um programa que leia um vetor de 10 números inteiros e inverta todos os 
    elementos do vetor. O programa deve ser resolvido com a utilização de apenas um 
    vetor.  
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

    for (c=0; c<QUANTIDADE; c++){
        printf("%d - ",vetor[c]);
    }

    printf("\n\n");

    c=0; int c2 = QUANTIDADE-1;
    while(c<5){
        int holder = vetor[c];
        vetor[c] = vetor[c2];
        vetor[c2] = holder;
        c2--;
        c++;
    }

    for (c=0; c<QUANTIDADE; c++){
        printf("%d - ",vetor[c]);
    }
    return 0;
}

