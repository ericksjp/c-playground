/*
    165. Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um 
    terceiro vetor que contenha todos os elementos que estão presentes nos dois 
    vetores. O terceiro vetor não deverá armazenar valores repetidos.  
*/
#include <stdio.h>

#define DIFERENCIADOR -987651

int main()
{
    
    int vetor1[5]; int vetor2[5]; int vetor3[10];

    for (int c = 0; c<5; c++){
        int num;
        printf("Informe o %d numero do 1 vetor: ",c+1);
        scanf("%d",&num);
        vetor1[c] = num;
    }

    printf("\n");

    for (int c = 0; c<5; c++){
        int num;
        printf("Informe o %d numero do 2 vetor: ",c+1);
        scanf("%d",&num);
        vetor2[c] = num;
    }

    int c2 = 5;
    for (int c = 0; c<5; c++){
        vetor3[c] = vetor1[c];
        vetor3[c2] = vetor2[c];
        c2++;
    }

    for (int c = 0; c<10; c++){
        for (c2 = c+1; c2<10; c2++){
            if (vetor3[c]==vetor3[c2]){
                vetor3[c2] = DIFERENCIADOR;
            }
        }
    }

    printf("\n3� vetor:[");

    for (int c = 0; c<10; c++){
        if (vetor3[c]!=DIFERENCIADOR){
            printf(" %d -",vetor3[c]);
        }
    }
    printf("\b]");
    return 0;
}
