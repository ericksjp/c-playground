/* 
    171. Escreva um programa que leia dois vetores de 5 números reais cada e calcule o 
    prod uto esc alar destes vetores.  
*/
#include <stdio.h>

int main()
{
    
    int vetor1[5]; int vetor2[5];

    int* vetores[] = {vetor1,vetor2};

    for (int c=0; c<2; c++){
        for (int c2=0; c2<5; c2++){
            int num;
            printf("Informe o %d valor do vetor %d -> ",c2+1,c+1);
            scanf("%d",&num);
            vetores[c][c2]=num;
        }
        printf("\n");
    }

    int somador = 0;
    for (int c=0; c<5; c++){
        int resultado = vetor1[c]*vetor2[c];
        somador += resultado;
    }
    printf("Produto escalar dos dois vetores: %d",somador);
    return 0;
}
